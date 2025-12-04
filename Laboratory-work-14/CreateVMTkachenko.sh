VBoxManage createvm --name "Linux of Tkachenko 2" \
-ostype Ubuntu14_LTS --register

VBoxManage modifyvm "Linux of Tkachenko 2" --cpus 1

VBoxManage modifyvm "Linux of Tkachenko 2" --memory 2266

VBoxManage modifyvm "Linux of Tkachenko 2" --vram 124

vboxmanage modifyvm "Linux of Tkachenko 2" --nic1 nat

VBoxManage modifyvm "Linux of Tkachenko 2" \
--natpf1 "SSH,tcp,127.0.0.1,1234,10.0.2.15,22"

VBoxManage storagectl "Linux of Tkachenko 2" --name "TkachenkoSATA" \
--add sata --controller IntelAHCI

VBoxManage storagectl "Linux of Tkachenko 2" --name "TkachenkoIDE" \
--add ide --controller PIIX4

VBoxManage createmedium --filename DiskTkachenko.vdi --size 8960

VBoxManage storageattach "Linux of Tkachenko 2" \
--storagectl "TkachenkoIDE" --port 0 --device 0 --type dvddrive \
--medium "C:\Users\ntkac\Downloads\ubuntu-14.04.6-server-i386.iso"

VBoxManage startvm "Linux of Tkachenko 2"

VBoxManage controlvm "Linux of Tkachenko 2" savestate

VBoxManage startvm "Linux of Tkachenko 2"

VBoxManage controlvm "Linux of Tkachenko 2" poweroff

VBoxManage unregistervm "Linux of Tkachenko 2" --delete-all
