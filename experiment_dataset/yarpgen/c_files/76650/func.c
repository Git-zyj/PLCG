/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76650
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) / (((((/* implicit */_Bool) var_5)) ? (var_8) : (var_9)))))) ? (((/* implicit */int) ((unsigned short) 9223372036854775785LL))) : ((+(((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    arr_8 [i_0] [6LL] [i_2] [6LL] = ((/* implicit */int) (~(max((((((/* implicit */_Bool) var_14)) ? (arr_6 [i_0] [8LL] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1] [(unsigned short)14])), (5ULL)))))));
                    arr_9 [8] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-69)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [8ULL] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) -1209143201563716072LL)) ? (1209143201563716072LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) / (min((arr_2 [i_4] [i_1 - 2]), (((/* implicit */long long int) var_0)))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (signed char)72)) / (((/* implicit */int) (short)-11085))))))));
                                arr_16 [i_2] [i_1] [i_4] [i_3 - 1] [(signed char)13] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9936682845909557067ULL))));
                                arr_17 [i_4] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) -1209143201563716071LL)) ^ (max((var_13), (((/* implicit */unsigned long long int) var_0)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((unsigned short) var_6));
                    var_21 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)127)) ? (9936682845909557065ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40041)))))));
                }
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_22 = ((/* implicit */short) (!(((((/* implicit */_Bool) ((unsigned long long int) 14464824459734205676ULL))) || (((/* implicit */_Bool) arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1 - 2]))))));
                    var_23 = ((/* implicit */unsigned int) arr_5 [i_1]);
                }
                arr_20 [i_0] [(signed char)7] = ((/* implicit */int) ((_Bool) -1209143201563716072LL));
                var_24 = ((/* implicit */long long int) 9936682845909557070ULL);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2100403755)) ? (((/* implicit */unsigned long long int) var_8)) : (9936682845909557082ULL))) << (((((/* implicit */_Bool) ((8510061227799994548ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((8510061227799994539ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (min((var_13), (((/* implicit */unsigned long long int) 394636702451808709LL)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            {
                var_26 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [(unsigned short)14] [i_7] [i_6 + 2])) || (((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_6 + 1])))) && (((((/* implicit */_Bool) arr_24 [i_6] [i_7] [i_6 + 4])) || (((/* implicit */_Bool) var_10))))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 + 2] [i_6 + 2] [i_6])) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 + 1] [i_7] [i_7])) && (((/* implicit */_Bool) var_12)))))));
                arr_25 [i_6] [i_7] [i_7] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) 4621123174835281297LL)) && (((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */int) ((9936682845909557068ULL) < (((/* implicit */unsigned long long int) 1209143201563716051LL))))) : (((/* implicit */int) (signed char)73))))));
                arr_26 [i_6] [i_6 + 2] [i_6] = 2960927263977559397LL;
            }
        } 
    } 
}
