/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58163
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
    var_10 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */int) var_1);
                            var_12 = min((2147483636), (((/* implicit */int) (unsigned char)241)));
                            var_13 = 947361054;
                            var_14 = ((int) min((min((((/* implicit */int) arr_5 [i_0] [i_0])), (var_0))), (((/* implicit */int) arr_2 [i_3 + 1]))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */int) arr_9 [12] [i_1] [0] [i_0]);
                arr_10 [(unsigned char)8] [i_0] [i_0] = ((/* implicit */unsigned char) (((((((~(1599199582))) / (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))))) + (2147483647))) >> (((/* implicit */int) ((unsigned char) 1065353216)))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [(signed char)15] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_4 + 1]))))) ? (((((/* implicit */int) arr_4 [i_0 + 1] [i_0])) / (((int) arr_12 [i_4])))) : ((~((-(((/* implicit */int) (unsigned char)6)))))));
                            var_16 = ((/* implicit */int) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((((var_5) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) ((524224) >= (((/* implicit */int) (unsigned char)0)))))))));
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_3))));
    var_19 += ((((/* implicit */int) var_9)) * (((((/* implicit */int) (unsigned char)1)) / (((/* implicit */int) ((unsigned char) (unsigned char)14))))));
}
