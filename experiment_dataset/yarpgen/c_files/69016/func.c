/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69016
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */int) var_8)), (var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43372)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (var_0) : (var_0))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))) : (max(((~(-867167006195481097LL))), (((/* implicit */long long int) var_11))))));
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)36916)), (8025404518380945210LL)))) ? (((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 6856126279629337233ULL)) ? (-8025404518380945216LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((((8025404518380945210LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)86))))) ? (min((((/* implicit */unsigned long long int) var_6)), (6856126279629337233ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_6);
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned short i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((min((arr_5 [i_1]), (arr_5 [i_1]))) > (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3 + 1]))) : (arr_5 [i_1])))));
                    var_15 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) (unsigned short)19154)), (arr_6 [i_1] [i_3]))), (((/* implicit */unsigned long long int) var_11))));
                    var_16 ^= (~(((((/* implicit */_Bool) arr_6 [i_2] [i_3 - 1])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_3 + 1]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2516868335U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_1])))))) ? ((+(-8025404518380945205LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)100)), (arr_12 [i_1] [i_1]))))))) > (max((((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_1] [i_2] [i_1] [i_1]))))), (-4585006215060078198LL)))));
                        var_18 = ((/* implicit */signed char) 3521000868784266825ULL);
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [i_1] [i_1]), (arr_11 [i_1] [i_4] [i_5]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_5]))) / (9174330888829447647ULL))))), (min((((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(_Bool)1] [i_2] [i_3 - 1] [i_2] [i_1] [i_2]))) : (6856126279629337233ULL))), (((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [i_5 + 1] [i_5] [i_1]))))));
                            var_20 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 11645951665738408568ULL)) ? (((/* implicit */int) (unsigned short)2592)) : (((/* implicit */int) (unsigned short)2607)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2] [i_4] [i_1]))) : (-4585006215060078198LL));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) 6856126279629337217ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156))) : (6856126279629337233ULL)))));
                        arr_23 [i_1] [i_2] [i_3] [(short)14] = ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)50212))))));
                        var_22 = var_5;
                        arr_24 [i_1] [i_2] [i_2] [i_6] |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_6])) > (((/* implicit */int) (signed char)17)))) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)48251))));
                    }
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_3 + 2] [i_1] [i_1])))), (((/* implicit */int) (unsigned char)180))));
                        var_24 = (!(((/* implicit */_Bool) max(((unsigned short)19361), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_3 - 1] [i_7])))))))));
                        var_25 |= ((/* implicit */int) (((((!(((/* implicit */_Bool) 9272413184880103960ULL)))) ? (((/* implicit */int) arr_20 [16ULL] [i_2] [(_Bool)1] [i_2] [i_2] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [(unsigned short)2] [i_2] [i_7]))))))) > (((/* implicit */int) arr_8 [i_2]))));
                    }
                }
            } 
        } 
    }
}
