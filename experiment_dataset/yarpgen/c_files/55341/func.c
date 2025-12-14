/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55341
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
    var_11 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    var_12 = min((((arr_2 [i_2 - 1] [i_1] [i_0]) ^ (arr_2 [i_2 - 1] [i_1] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 1] [i_1] [i_1]))))));
                    arr_6 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_2])) ? (var_3) : (((/* implicit */long long int) (-2147483647 - 1)))))))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_7))));
                    var_14 = ((/* implicit */long long int) ((unsigned char) arr_4 [i_0 - 2] [i_0] [i_0] [i_0]));
                }
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) ((long long int) arr_2 [i_0] [i_1] [i_3]));
                    var_16 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1] [i_0 + 1])) ? (arr_8 [i_0 - 2] [i_1] [i_3]) : (-9027065550194583233LL)))));
                    var_17 += ((/* implicit */unsigned char) max((max((arr_4 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]), (arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (max((((/* implicit */int) (unsigned short)64403)), (-1)))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0 - 1] [i_0] [i_3]) : (((/* implicit */int) var_7)))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -16)) ? (-1874297578250790645LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) >= ((+(arr_2 [i_0 + 2] [i_1] [i_0 - 1])))));
                }
                for (unsigned short i_4 = 2; i_4 < 15; i_4 += 2) 
                {
                    var_20 = (i_1 % 2 == 0) ? (((/* implicit */short) (((~(arr_2 [i_0] [i_1] [i_0]))) >> (((((var_3) + (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_0])))) - (1112727881519969194LL)))))) : (((/* implicit */short) (((~(arr_2 [i_0] [i_1] [i_0]))) >> (((((((var_3) + (((/* implicit */long long int) arr_2 [i_1] [i_1] [i_0])))) - (1112727881519969194LL))) - (1306603785LL))))));
                    arr_12 [i_0 - 1] [i_1] [i_0] = max((1), (((/* implicit */int) var_4)));
                }
                var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (-1) : (((/* implicit */int) (signed char)-26)))) * (1628994339)));
                arr_13 [i_0] [i_1] = max((max((((((/* implicit */_Bool) -6461611197917879361LL)) ? (-6461611197917879372LL) : (var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6461611197917879361LL))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -6461611197917879352LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (2263240157U)))));
            }
        } 
    } 
}
