/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99709
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50704)))))) : (((((/* implicit */_Bool) var_12)) ? (2097150ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32751)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_2)))))) : ((~((+(7440658602309680754ULL)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)59217)), (var_5))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */short) (signed char)-79)))))))) ? (max((2097150ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) % (((/* implicit */int) var_15))))))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(arr_5 [i_1] [i_1] [i_0])));
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16523440360110231955ULL)) ? (-1634424193) : (((/* implicit */int) (short)17952))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)46355))))) : (arr_5 [i_0] [i_3] [i_2]));
                                var_21 = ((/* implicit */unsigned long long int) (~(((int) 2097141ULL))));
                                var_22 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_2])), (2097150ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((4294967295U), (((/* implicit */unsigned int) (signed char)46)))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((short) ((arr_11 [i_1] [i_2] [i_3] [(short)9]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))))));
                                var_24 = ((/* implicit */unsigned int) 15187459562165035486ULL);
                            }
                            for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                            {
                                var_25 = ((/* implicit */signed char) arr_11 [i_3] [i_0] [i_1] [i_0]);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)63))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) 0))));
                                arr_22 [i_0] [i_0] = ((/* implicit */unsigned char) (+(16523440360110231955ULL)));
                                arr_23 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4697)) ? (((/* implicit */int) min(((unsigned short)14801), (((/* implicit */unsigned short) (unsigned char)148))))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_7)) - (12630)))))))), (((((/* implicit */_Bool) arr_10 [i_0] [(signed char)9] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(2172738008733841001ULL)))))));
                                var_27 = ((/* implicit */unsigned int) (_Bool)1);
                            }
                            var_28 = ((/* implicit */unsigned char) ((arr_11 [i_0] [i_0] [i_0] [i_3]) ^ (((/* implicit */unsigned long long int) (~(1U))))));
                            var_29 = ((/* implicit */short) (+((+(arr_5 [i_0] [i_3] [i_2])))));
                        }
                    } 
                } 
                arr_24 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-17956)) + (2147483647))) << (((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_14 [i_0] [i_0])))) - (63332)))));
                var_30 = ((/* implicit */int) arr_11 [11U] [i_0] [11U] [i_1]);
            }
        } 
    } 
}
