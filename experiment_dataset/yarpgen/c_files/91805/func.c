/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91805
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
    var_10 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-57))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) 2525079001U)))) <= (((((/* implicit */_Bool) var_2)) ? (4315633878981783187LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_13 [i_0] [(unsigned short)11] [12ULL] [i_0 + 3] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                        arr_14 [i_0] [i_0] [10LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) ((var_9) == (7121950920415301305LL))))));
                        var_11 -= ((/* implicit */unsigned long long int) ((((long long int) var_9)) * (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_7 [i_0])))))));
                        var_12 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) -6711148264730490964LL)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                    }
                    arr_15 [i_1] [(signed char)12] = ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_0 + 2]));
                    var_14 = ((/* implicit */long long int) arr_7 [i_1]);
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    }
    for (long long int i_4 = 2; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_16 *= (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4 - 1] [i_4 - 1]))))))) != (((/* implicit */int) var_8)));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)(-127 - 1)))))) != (((/* implicit */int) ((arr_10 [i_4] [(signed char)9] [i_4]) != (var_9))))))) <= (((/* implicit */int) (!((_Bool)1))))));
    }
    for (long long int i_5 = 2; i_5 < 10; i_5 += 4) /* same iter space */
    {
        var_18 = (+((((!(((/* implicit */_Bool) arr_20 [i_5 - 2])))) ? ((~(2494679520601027496LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5]))))));
        var_19 -= ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_17 [i_5]))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 3; i_6 < 12; i_6 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [9LL]))));
            arr_25 [11LL] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_1 [i_5 + 3] [i_5 + 3])) != (((/* implicit */int) arr_17 [i_5 - 1])))) ? (((/* implicit */long long int) ((unsigned int) arr_11 [(signed char)9] [i_6 + 2] [i_5 + 3] [i_5] [(signed char)9] [i_5]))) : ((((_Bool)1) ? (arr_5 [5LL]) : (arr_24 [i_5]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_6] [10ULL] [i_6]))))));
            arr_26 [i_5 + 2] [i_6 + 1] = ((/* implicit */unsigned int) var_0);
            var_21 = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [0ULL] [i_6] [i_5 - 2])) <= (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) arr_20 [i_5 - 2])) : (((/* implicit */int) var_3)))))) ? (-1064584988730139571LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 2961394265U)))))))));
        }
    }
    var_22 = ((/* implicit */unsigned long long int) (_Bool)0);
}
