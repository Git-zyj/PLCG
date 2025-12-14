/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69085
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
    var_19 |= ((/* implicit */unsigned char) max((max((((/* implicit */int) var_2)), ((+(((/* implicit */int) var_10)))))), (-918897293)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_20 |= ((/* implicit */short) (~(((/* implicit */int) var_6))));
                            arr_10 [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]);
                            arr_11 [i_2] [(unsigned short)4] [7ULL] [i_3] = ((/* implicit */long long int) max(((-2147483647 - 1)), (((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2] [i_2 - 1]))))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) arr_6 [i_2] [i_2] [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)10))))) : (min((arr_2 [i_2]), (((/* implicit */unsigned int) (short)120))))))) ? (((/* implicit */int) (short)32766)) : (((((/* implicit */int) var_17)) - (((/* implicit */int) arr_3 [i_1 - 2] [i_1] [i_3]))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                            {
                                arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) 2282405449U));
                                var_21 &= ((/* implicit */unsigned int) var_18);
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_22 *= ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) ^ (4441327826969417706ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64510))) : (arr_8 [i_5] [i_1 - 1] [0U] [i_1 - 1] [i_1 - 1] [i_6]))) << (((((/* implicit */int) var_10)) - (219))));
                            var_23 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_6] [i_1 + 2] [i_1 + 2])))), (((/* implicit */int) min((arr_15 [i_1 + 2] [i_1 + 1] [i_5] [i_1 + 1] [i_1]), (arr_15 [i_0] [i_0] [i_1] [i_1 + 1] [i_6]))))));
                            arr_21 [i_0] [i_1] = ((/* implicit */long long int) min((((unsigned long long int) ((unsigned short) var_10))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_6]))) - (14440681812027877935ULL)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_4 [(unsigned short)0] [i_0] [i_1])) + (2147483647))) << (((arr_2 [i_1 - 2]) - (2142227989U))))), (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned char)12] [i_0])) - (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) (signed char)-77)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [1LL] [i_1] [i_1] [(unsigned char)8] [(unsigned char)0] [i_1])))))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_1 [i_1 - 2]))) != ((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)14534), (((/* implicit */short) (unsigned char)32))))))))));
            }
        } 
    } 
}
