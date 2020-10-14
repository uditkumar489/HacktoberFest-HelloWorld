from Bio import SeqIO
from Bio.Seq import Seq
from Bio.SeqUtils import GC

for seq_record in SeqIO.parse("gccontent.txt","fasta"):
	print(seq_record.id)
	x=str((seq_record.seq))
	print(GC(x))
	
