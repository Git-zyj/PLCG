/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89929
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_10 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)0)))) : (min((((/* implicit */long long int) var_4)), (min((-3999923699363615380LL), (((/* implicit */long long int) var_7))))))));
            arr_5 [i_1] [i_1] [i_1] = (~(max((((((/* implicit */_Bool) (unsigned char)7)) ? (-122440034347419126LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))), (((/* implicit */long long int) (unsigned char)40)))));
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-959129571) | (((/* implicit */int) var_2))))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) var_1))))))));
            var_12 = ((/* implicit */unsigned char) var_9);
        }
        var_13 &= (+((-((-(var_9))))));
    }
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */signed char) ((((var_7) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)251)))) : (((((/* implicit */_Bool) (unsigned char)32)) ? (var_9) : (((/* implicit */int) var_7)))))) | ((-((+(((/* implicit */int) (unsigned char)19))))))));
        /* LoopNest 3 */
        for (long long int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */int) (unsigned char)19)), (((-1706586343) | (((/* implicit */int) var_4))))))), (((long long int) (+(((/* implicit */int) (unsigned char)224))))))))));
                        arr_15 [i_5] [i_4] [(unsigned char)19] [i_2] = ((/* implicit */unsigned char) ((((-972358160) | (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1])))) - (((/* implicit */int) arr_14 [i_4]))));
                        arr_16 [i_5] [i_4] [i_2] [i_2] = ((((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) var_4)))) <= (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)10)) <= (((/* implicit */int) (unsigned char)238)))))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) max((min(((unsigned char)186), (((/* implicit */unsigned char) arr_10 [i_2] [i_2])))), (((/* implicit */unsigned char) ((signed char) 7073894209846706231LL)))))) <= (((/* implicit */int) max((arr_13 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) var_4)))))));
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] [i_6] = ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((((/* implicit */_Bool) min((972358134), (((/* implicit */int) arr_6 [i_6]))))) ? (var_3) : (((/* implicit */long long int) ((var_7) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_9 [i_6] [i_6]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)96)) < (-254969286)))) < (-1706586328)))))));
    }
}
