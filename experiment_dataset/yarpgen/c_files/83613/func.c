/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83613
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_13)), (var_1))), (((/* implicit */unsigned long long int) (short)27630)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_9 [i_1] = ((/* implicit */long long int) (short)11367);
                    arr_10 [i_0 - 1] [i_1] [i_2] [i_0 - 1] = ((/* implicit */unsigned short) var_6);
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (short)11367)), (arr_4 [i_0 - 1])))))) ? ((-(((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) arr_1 [i_0 - 1])))))) : (((/* implicit */int) arr_2 [i_0 + 1]))));
                    var_16 = ((/* implicit */unsigned char) arr_6 [i_2]);
                }
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_7 [i_1] [i_1]))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_9)))))), (((((/* implicit */int) arr_15 [i_0 + 1])) + (((((/* implicit */int) var_13)) << (((((var_12) + (1439229256))) - (24)))))))));
                        arr_16 [i_0] [i_1] |= ((/* implicit */unsigned char) min(((-((-(((/* implicit */int) (short)11367)))))), (((((/* implicit */_Bool) (signed char)-54)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) (unsigned char)17)))) : ((-(((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1]))))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) arr_19 [i_0] [i_1] [i_5] [i_6]);
                            arr_23 [i_0] = ((min(((~(6015307239805258518ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_17 [i_0] [i_0]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11370)) << ((((~(var_8))) - (3349989055U)))))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */int) min((max(((unsigned short)3), (((/* implicit */unsigned short) (unsigned char)25)))), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_11 [(short)9])) + (((/* implicit */int) var_0)))) <= (((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                var_21 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_12)), (((((unsigned int) (unsigned short)31649)) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18306008908162129821ULL))))))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_30 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */long long int) (unsigned short)10);
                            var_22 = ((/* implicit */short) min((((/* implicit */int) max((((/* implicit */short) (unsigned char)239)), ((short)32767)))), ((+(((/* implicit */int) arr_2 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
