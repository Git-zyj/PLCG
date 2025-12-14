/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72583
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) max((min(((short)-26476), (((/* implicit */short) var_7)))), (((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-28725)) : (2085195369))) == (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_7))))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [(unsigned char)10] [i_1])) && (((((/* implicit */int) (short)15771)) <= (((/* implicit */int) arr_6 [i_0] [i_1])))))) ? ((+(((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15772))))))));
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))) / (var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (short)-26476))))) : (((((/* implicit */int) (unsigned char)125)) * (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) == (16352U)))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) (~(max((min((3199733361284431971ULL), (arr_4 [(signed char)6]))), (((((/* implicit */_Bool) 17610900030213014355ULL)) ? (((/* implicit */unsigned long long int) var_6)) : (15247010712425119640ULL)))))));
    }
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 10; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) (signed char)-111)), (((arr_14 [i_5 - 1] [i_3] [i_3] [i_5 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185)))))));
                    var_13 = ((/* implicit */unsigned char) (short)-15790);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)46062)) ? ((-(((/* implicit */int) min((var_8), (var_4)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -728201322)) > (var_1)))), (var_0))))));
}
