# Geffe-Generator and Stop and Go Generator code
Geffe key stream generator uses three LFSRs,combined in a non linear manner.
Two of the LFsrs are inputs into a multiplexer and the third LFSR controls the ouput of the multiplexer.
Alternating Stop-and-Go Generator
This generator uses three LFSRs of different length. LFSR-2 is clocked when the output of LFSR-1 is 1; LFSR-3 is clocked when the output of LFSR-1 is 0. The output of the generator is the XOR of LFSR-2 and LFSR-3 
Normally LFSRs are stepped regularly. One approach to introducing non-linearity is to have the LFSR clocked irregularly, controlled by the output of a second LFSR. Stop and Go generator is one of them. The stop-and-go generator consists of two LFSRs. One LFSR is clocked if the output of a second is a 1, otherwise it repeats its previous output. This output is then (in some versions) combined with the output of a third LFSR clocked at a regular rate.
