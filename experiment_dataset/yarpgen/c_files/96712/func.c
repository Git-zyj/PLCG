/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96712
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])), ((+(((/* implicit */int) (unsigned char)175))))))) ? ((+(arr_4 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))) != (((/* implicit */int) ((signed char) arr_6 [i_0] [i_0] [i_0])))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2115147458576827244LL)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) (unsigned char)86))))) >= ((-(3498366436U))))))));
                }
            } 
        } 
        var_17 *= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 14; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_13 [i_3]))));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_20 [i_3] [i_4] [i_6] = ((/* implicit */unsigned short) arr_11 [i_3]);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)151)) ? ((-(arr_14 [i_5] [i_5 + 3] [i_5 + 1]))) : (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) / (arr_12 [i_3] [i_4]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)146))) / (-2115147458576827237LL)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 1; i_8 < 16; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (~(arr_15 [i_3] [i_5] [i_5]))))))))));
                            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_3 [i_3])))), ((-(((/* implicit */int) (unsigned short)29696))))))) && (((/* implicit */_Bool) arr_24 [i_4] [i_4]))));
                        }
                        arr_25 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned long long int) ((-3456122435996616372LL) - (((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3] [i_3]))));
                        var_22 = ((/* implicit */unsigned short) (+((-(((((/* implicit */unsigned long long int) 7462419109749459315LL)) - (11666098291899093343ULL)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) -2115147458576827254LL);
                        arr_30 [i_3] [i_9] [(short)6] [i_3] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_9] [i_3] [i_4] [i_3]))));
                        var_24 -= ((/* implicit */signed char) ((((-7462419109749459331LL) + (9223372036854775807LL))) >> (((11666098291899093353ULL) - (11666098291899093298ULL)))));
                        var_25 = ((/* implicit */unsigned long long int) (unsigned short)30269);
                        var_26 = ((/* implicit */int) 2115147458576827254LL);
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((short) arr_9 [i_3] [i_3] [i_3]));
        arr_31 [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((long long int) arr_8 [i_3])), (((/* implicit */long long int) min((3937181870U), (((/* implicit */unsigned int) (unsigned char)124)))))))), (((arr_27 [14] [i_3] [i_3] [i_3] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26287)))))));
        var_28 *= ((/* implicit */unsigned short) ((((unsigned long long int) 3456122435996616342LL)) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_3] [i_3]))))), (arr_7 [i_3] [i_3] [i_3] [i_3]))))));
        arr_32 [i_3] = ((/* implicit */int) (-((-(arr_7 [i_3] [i_3] [i_3] [i_3])))));
    }
    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 12; i_11 += 3) 
        {
            for (long long int i_12 = 1; i_12 < 10; i_12 += 4) 
            {
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_12 + 3] [i_12 + 3])) ? (((/* implicit */int) arr_0 [i_11 - 1] [i_12 + 2])) : (((/* implicit */int) (unsigned short)6772)))) >> (((((/* implicit */int) arr_0 [i_11 + 2] [i_12 + 1])) + (((/* implicit */int) arr_0 [i_11 - 1] [i_12 + 2]))))));
                    var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_34 [i_12])))) ? (((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_10] [i_10])))) > (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)117)), ((unsigned short)48364))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(2108551092)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-125))))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */_Bool) -2115147458576827256LL);
        arr_41 [i_10] = ((/* implicit */_Bool) (((_Bool)1) ? (808694507426952532LL) : (((/* implicit */long long int) ((3937181870U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)23924))))))));
    }
    var_32 *= ((/* implicit */_Bool) min((((/* implicit */int) (short)-22959)), (1098606431)));
}
