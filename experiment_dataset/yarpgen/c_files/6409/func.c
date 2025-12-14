/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6409
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
    var_17 |= (+((~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((((/* implicit */int) var_1)) >> ((((~(13513937749872925042ULL))) - (4932806323836626563ULL))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) 137438953456LL))))))));
    }
    for (short i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        arr_4 [i_1 - 3] = ((/* implicit */_Bool) max((max((var_11), ((+(1780957087U))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (short)17555)))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [i_2] [i_4 - 1] [i_3] [(signed char)12] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_4 - 1] [i_2] [i_1 - 3] [(_Bool)1])) ? (254) : (arr_10 [i_4 - 1] [i_2] [i_1 - 3] [13])))) > (var_15)));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) (+(arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_1 + 1]))))))))));
                        var_21 = ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [11U] [5U]))) | (arr_7 [i_2] [i_3] [i_2]))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1]))))))) ^ (var_15)));
                        var_22 = ((/* implicit */short) ((((4294967295U) / (arr_6 [i_4 - 1]))) >> (((1800725776) - (1800725758)))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] [1] = ((/* implicit */int) arr_3 [i_1]);
        var_23 = ((((/* implicit */_Bool) ((arr_7 [i_1 - 1] [i_1 - 3] [i_1 - 1]) >> (((arr_7 [i_1] [i_1 - 1] [i_1 + 1]) - (8528543456205413681ULL)))))) ? (((/* implicit */long long int) ((1U) >> (((((/* implicit */int) var_13)) - (97)))))) : (var_14));
    }
    for (short i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_15 [i_5 + 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5 - 2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_15 [i_5 - 1]))))))) : (((((arr_15 [i_5 + 3]) << (((var_6) + (4089736799690766690LL))))) << ((((~(((/* implicit */int) var_12)))) + (127)))))));
        arr_17 [i_5 + 3] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */unsigned int) var_9)) : (1073741823U))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_5] [(signed char)4]))))))))) != ((+(min((270215977642229760LL), (((/* implicit */long long int) var_10))))))));
        var_24 = ((/* implicit */short) arr_14 [21U] [i_5 + 4]);
        var_25 = ((/* implicit */int) ((unsigned short) var_1));
        var_26 = ((/* implicit */int) ((_Bool) arr_14 [i_5 + 2] [i_5 - 1]));
    }
    /* vectorizable */
    for (short i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_6 - 2] [i_6 + 1])) || (((/* implicit */_Bool) var_1))));
        var_27 = ((/* implicit */unsigned int) (~(arr_18 [i_6 + 1])));
    }
}
