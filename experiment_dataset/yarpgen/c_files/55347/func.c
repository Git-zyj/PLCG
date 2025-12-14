/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55347
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 = ((/* implicit */short) (+(5447043258771101736LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((signed char) ((unsigned long long int) 5447043258771101736LL));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (-(((unsigned long long int) (unsigned char)0))));
                                arr_14 [(_Bool)1] [i_3] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) (+(-5447043258771101736LL)));
                                arr_15 [i_0] [(_Bool)1] [(_Bool)1] [i_3] [i_4 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_9 [1ULL] [i_2] [i_2])))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_5 [i_0];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) arr_7 [1U] [i_5 - 1] [i_5 - 1] [(unsigned char)6]);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((arr_3 [i_5]), (((/* implicit */unsigned int) (_Bool)1)))))) ? (((min((arr_1 [i_5 - 1] [i_5]), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)75)), (arr_17 [i_5 - 1] [(signed char)0])))) ? (((((/* implicit */_Bool) (signed char)-55)) ? (arr_9 [i_5 - 1] [i_5 - 1] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(signed char)2] [i_5] [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5447043258771101749LL)) ? (arr_17 [i_5] [i_5]) : (arr_3 [i_5]))))))));
        var_21 = ((/* implicit */unsigned int) ((signed char) (-((~(arr_3 [i_5 - 1]))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) min((arr_5 [i_6]), ((signed char)-55))))))));
        arr_22 [i_6] = ((/* implicit */short) arr_1 [i_6 - 1] [(unsigned char)11]);
        arr_23 [i_6 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_19 [i_6])))))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)250))))));
        arr_29 [2U] = ((/* implicit */signed char) (~((+(-5447043258771101749LL)))));
        arr_30 [i_7] = ((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))));
    }
}
