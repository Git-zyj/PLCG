/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98173
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    arr_10 [i_0 - 1] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_0 - 3] [i_0 + 1])), (arr_9 [i_0 - 1] [i_1] [i_0 + 1])))) == (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0]))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_0 - 1])), ((unsigned short)38660)))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0 - 1] [i_0 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26877)))))));
                            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((((((/* implicit */_Bool) (+(arr_12 [i_0 + 1] [i_1] [i_1] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38675))) : (max((((/* implicit */unsigned int) (unsigned short)26861)), (var_5))))), (((/* implicit */unsigned int) max((min(((unsigned short)38660), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2147483647)))))))))))));
                            var_12 = ((/* implicit */long long int) max((max(((~(11003498939954792437ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)112))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 3])))))));
                        }
                        arr_18 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((_Bool) (unsigned short)26849))));
                    }
                    var_13 = ((/* implicit */unsigned int) (~((+((~(arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0])))))));
                }
                var_14 = ((/* implicit */signed char) ((unsigned char) (!(((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) >= (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_1)), (((unsigned int) var_3)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_16 = ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_1)) : (var_3))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_10))))))));
}
