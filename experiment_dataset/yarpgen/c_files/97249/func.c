/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97249
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) ? (2251799813685247LL) : (-2251799813685242LL)));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-126)), (0LL)))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)59659))))))) ? (((((/* implicit */long long int) 1345137889)) / (-2251799813685251LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_6 [i_2])))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) arr_4 [i_2] [i_1 + 1] [i_1 + 1]))))))))));
                        arr_10 [i_0] [i_0] [i_2] [22] [i_0] &= var_15;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (+((~(((/* implicit */int) (unsigned char)113))))));
                    arr_15 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((-1345137890) + (((/* implicit */int) arr_12 [i_0] [i_4]))))), (((2251799813685251LL) >> (((/* implicit */int) (unsigned short)0))))))) ? (2147483647) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [19U] [19U])) != (((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned char)239)))))))));
                    var_19 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) - (0ULL))), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_2 [i_0])))))))));
                    var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) != (1149150450U));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1345137889)) / (2251799813685239LL)))) != (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551604ULL)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) min(((unsigned short)65527), (((/* implicit */unsigned short) var_14)))))))) ? ((~(((/* implicit */int) (unsigned char)197)))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (-1345137890)))))));
    var_22 = ((/* implicit */int) var_2);
    var_23 = ((/* implicit */unsigned int) ((unsigned char) 786432));
}
