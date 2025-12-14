/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57046
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_9 [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2])) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)188)))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (17071826781789035256ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (~(1196443015U)));
                                arr_15 [i_2] [i_1] [i_2] [(short)10] [i_1] [i_2] |= ((/* implicit */int) (unsigned char)188);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) arr_19 [i_0] [(short)12] [i_1 + 4] [(signed char)2] [i_6]))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_11))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)14), (((/* implicit */unsigned char) arr_18 [i_0] [i_1 + 2] [i_5] [i_6]))))) ? (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) : (arr_21 [i_0] [i_1] [i_5] [(_Bool)1])))) / (min((17071826781789035253ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_6] [i_5] [i_1 + 3])))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [(unsigned char)2] [i_1 - 3])), (((((/* implicit */int) (unsigned char)237)) & (((/* implicit */int) arr_18 [i_0] [i_1] [i_0] [i_6]))))))))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-((((~(((/* implicit */int) var_3)))) + (((/* implicit */int) (unsigned char)188)))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) min((min(((unsigned short)60875), (((/* implicit */unsigned short) (signed char)0)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_1] [i_1 + 3] [i_1])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((1823076920U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((1374917291920516376ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) ? (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_6)))) + (2147483647))) >> (((((((/* implicit */int) (unsigned short)4655)) | (((/* implicit */int) var_12)))) - (5029)))))) : (((((/* implicit */unsigned long long int) min((var_14), (-9223372036854775788LL)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (18446744073709551608ULL)))))));
    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46929))) / (17071826781789035263ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)49617)), (var_10)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(17179869183ULL)))))))))));
}
