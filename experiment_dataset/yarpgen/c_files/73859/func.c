/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73859
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_2))))) ? ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_1)))) : (((var_0) ? (((/* implicit */unsigned long long int) var_6)) : (var_12))))))))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65521)) < (((/* implicit */int) (signed char)-112))))) != (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)65535))))))), ((unsigned short)7636)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0] = ((/* implicit */short) arr_1 [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)11974)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((_Bool) var_13)))))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned char)0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))) : ((+(9223372036854775807LL)))))) && (((/* implicit */_Bool) arr_5 [i_3] [i_2])));
                        var_17 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) -9223372036854775803LL)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (unsigned char)72)))) | (((/* implicit */int) (short)(-32767 - 1)))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            var_18 *= ((/* implicit */unsigned char) (short)12197);
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 2] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3]);
                        }
                    }
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    arr_18 [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0]);
                    var_19 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_1 + 1] [4LL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_1 + 1] [i_0 + 1])))) * (((/* implicit */int) ((short) (unsigned char)71)))));
                    var_20 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))) : (max((((/* implicit */unsigned long long int) (short)-12659)), (arr_5 [i_5] [i_0]))))) < (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)0)) << (((arr_5 [i_5] [(_Bool)1]) - (10844832212433327715ULL)))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (signed char i_7 = 3; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_21 &= ((/* implicit */unsigned short) (+(9223372036854775806LL)));
                            var_22 += ((/* implicit */unsigned short) max((((/* implicit */int) ((var_14) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [i_7 - 3] [i_7 - 1] [i_7 - 3] [i_7 + 1])) ? (((/* implicit */int) ((short) (signed char)117))) : (((/* implicit */int) var_0))))));
                            var_23 = arr_13 [i_0] [i_1] [(short)3] [i_6] [i_7] [i_7];
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_8] [i_8])) != (((/* implicit */int) arr_26 [i_8] [i_8]))));
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_26 [i_8] [i_8]))));
        var_26 = ((/* implicit */signed char) (unsigned char)159);
    }
    var_27 = ((/* implicit */_Bool) (((!(((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned char)222)))))) ? (var_12) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
}
