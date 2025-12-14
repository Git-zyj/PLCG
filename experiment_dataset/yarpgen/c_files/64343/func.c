/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64343
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
    var_16 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) ((var_0) & (var_3)))) | ((~(var_11))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_6 [12ULL] [i_0])), ((unsigned short)37684)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_18 = (!((!(((/* implicit */_Bool) -8123882492060060510LL)))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_2]))))) & ((~(arr_0 [i_1]))));
                            arr_14 [i_1] [(unsigned char)3] [i_3] = ((/* implicit */short) min((arr_0 [i_1]), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -503146712))))))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                            {
                                arr_17 [i_0] [(unsigned short)8] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) var_12);
                                var_19 &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_0]))));
                                var_20 = ((/* implicit */short) ((((/* implicit */long long int) (-(((((/* implicit */int) arr_8 [i_1])) >> (((arr_11 [i_1] [i_1] [i_1] [i_1]) - (16023396941060199995ULL)))))))) ^ (6197283899009034396LL)));
                                arr_18 [i_0] [i_1] [i_0] [i_3] |= ((/* implicit */short) (((((~(-9))) > (((/* implicit */int) (unsigned short)27852)))) ? (((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned short)37703), ((unsigned short)6858))))))) : (((((/* implicit */long long int) ((unsigned int) arr_11 [i_0] [(unsigned short)12] [(unsigned short)12] [i_4]))) & ((+(var_10)))))));
                                var_21 -= max((((((/* implicit */_Bool) min((arr_1 [i_4]), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_4] [i_4] [i_3]))))) ? ((-(arr_12 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) (short)-32757)));
                            }
                            arr_19 [(unsigned char)16] [(unsigned char)16] [6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_11 [i_1] [(unsigned char)8] [i_2] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [(_Bool)0] [(_Bool)0]))))), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) -503146736)))) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) ((((/* implicit */int) (short)5990)) >= (((/* implicit */int) var_8))))))))));
                        }
                    } 
                } 
                arr_20 [i_1] = ((/* implicit */short) ((unsigned short) (signed char)-12));
                var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1] [(short)4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29966))) : (var_5)))))) ? (((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (short)10917))))) : (((/* implicit */long long int) (~(((/* implicit */int) max(((short)5990), (((/* implicit */short) arr_3 [i_0]))))))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned short) (~(max(((+(var_11))), (((/* implicit */unsigned long long int) var_9))))));
}
