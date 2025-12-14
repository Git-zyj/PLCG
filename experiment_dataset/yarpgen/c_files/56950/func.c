/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56950
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
    var_16 = ((/* implicit */long long int) ((var_14) & (((/* implicit */int) ((((int) var_0)) < (((/* implicit */int) (unsigned char)228)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)123))))) ^ (((((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3] [(signed char)4] [i_3])) % (((/* implicit */int) (signed char)9))))) % (3618863562U)))));
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_0] [i_1 + 4] [i_2])), (var_13))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) arr_7 [i_2] [10] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3])))), ((+(arr_0 [i_0])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((((/* implicit */short) var_1)), (arr_5 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) (signed char)123)) ? (arr_0 [i_0]) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) (unsigned char)27))));
                        arr_12 [6] [2LL] [i_1 + 3] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((signed char)-79), ((signed char)-124))))));
                        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3] [i_1 + 3] [i_2] [i_2] [i_3])) && (((/* implicit */_Bool) var_7))))) >> (((((/* implicit */int) arr_10 [i_3] [i_3] [i_2])) + (109)))))) ? (((/* implicit */int) max(((unsigned short)28270), (((/* implicit */unsigned short) (signed char)-123))))) : (((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) / (var_12)))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) var_13);
    }
    var_22 = ((/* implicit */unsigned int) var_13);
}
