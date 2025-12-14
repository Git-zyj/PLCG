/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85320
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
    var_12 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((((/* implicit */int) var_7)) / (((/* implicit */int) var_10))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * ((-(4721748321978428413ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) var_5);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (_Bool)0);
                            var_14 = ((/* implicit */short) var_6);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    var_15 *= var_5;
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        var_16 ^= ((/* implicit */short) arr_4 [(unsigned short)8] [i_0 - 1]);
                        var_17 = ((/* implicit */short) (!(var_9)));
                    }
                }
                for (unsigned short i_6 = 4; i_6 < 14; i_6 += 1) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_6 - 3] [i_1])))) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_6 - 3] [i_6])) : ((~(arr_5 [i_0] [(unsigned short)2] [(unsigned short)2])))))) ? (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)48576))))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_10)) << (((((/* implicit */int) var_7)) - (57820))))) != (((arr_1 [i_0]) | (((/* implicit */int) var_5))))))))));
                    var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                var_20 = var_0;
            }
        } 
    } 
    var_21 = (~(((/* implicit */int) ((((/* implicit */_Bool) ((var_9) ? (var_2) : (var_2)))) && (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6))))))));
    /* LoopSeq 1 */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_22 += (+(((/* implicit */int) (short)2592)));
        var_23 = ((/* implicit */unsigned long long int) var_7);
        var_24 ^= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 1334889816)) ? (((/* implicit */int) (short)-2592)) : (((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
    }
}
