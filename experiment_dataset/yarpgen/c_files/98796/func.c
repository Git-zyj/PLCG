/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98796
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) var_9);
            var_12 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((6501787646751561808LL), (((/* implicit */long long int) (_Bool)0)))))));
        }
        var_13 *= ((/* implicit */unsigned char) ((_Bool) var_7));
        arr_7 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~((~(((/* implicit */int) var_7))))))), ((~((~(var_5)))))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (var_2)));
        var_15 |= ((/* implicit */long long int) var_2);
    }
    var_16 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) var_11))))) ? (((/* implicit */int) min((var_11), ((_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((arr_9 [i_2]), (max((min((arr_9 [i_4]), (var_5))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) >= (arr_13 [i_2] [i_3] [i_4])))))))))));
                }
                arr_18 [i_2] [i_3] [i_3] = ((unsigned char) (~(((/* implicit */int) var_4))));
                var_18 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)157)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) (unsigned short)8499))))));
            }
        } 
    } 
}
