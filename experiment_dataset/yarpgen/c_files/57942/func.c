/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57942
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
    var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-31))))))), (((((((/* implicit */int) var_13)) * (((/* implicit */int) var_13)))) >> ((((+(((/* implicit */int) (signed char)-122)))) + (148)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)1771)), (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (min((((/* implicit */int) arr_2 [i_0])), (arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (5320367179233258336LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122)))))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */int) (signed char)-37)))) : (((int) (signed char)-85))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) : (max((arr_0 [i_0]), (((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) arr_2 [i_0]))));
    }
    var_21 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (1654388111)))))));
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_22 *= ((/* implicit */signed char) arr_6 [i_1] [i_1]);
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 2) 
            {
                arr_11 [i_3] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_2])) >> (((((/* implicit */int) arr_9 [i_1] [i_2] [i_2] [i_3])) + (48))))) | (max((((/* implicit */int) arr_9 [i_1] [i_1] [i_3] [i_1])), (arr_6 [i_1] [i_3])))))) % (min((((arr_10 [i_1]) - (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])))), ((+(arr_10 [i_2])))))));
                var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)38533)))) - ((~(arr_6 [i_2] [i_3 - 1])))))), (((((/* implicit */_Bool) 2132171419)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_1]))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (2982924604202705167ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_2] [i_1])))))))));
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)12084))))))));
                arr_15 [i_1] [i_2] [i_2] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_5 [i_2] [i_2]))) ? (2982924604202705167ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-75)) >= (((/* implicit */int) arr_7 [i_1]))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_25 = ((/* implicit */signed char) max((var_25), (((signed char) ((((/* implicit */_Bool) 9708960419294137747ULL)) ? (14847145303494835068ULL) : (arr_10 [i_1]))))));
                arr_20 [i_5] [i_2] [i_1] &= ((/* implicit */signed char) ((((14786609237492527521ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2])) ? (7517515324602395000LL) : (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_5])))))));
                var_26 = ((/* implicit */int) arr_10 [i_2]);
            }
            var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_2] [i_1])), (arr_18 [i_1] [i_1] [i_1]))))) ^ (max(((+(arr_10 [i_1]))), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_2]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_8 [i_1] [i_1])) ^ (arr_23 [i_6] [i_6]))))), (9584736970238013601ULL)));
            /* LoopSeq 2 */
            for (signed char i_7 = 1; i_7 < 22; i_7 += 2) 
            {
                arr_27 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_5 [i_6] [i_1]))))))));
                var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1])))))))), (16642800138621959931ULL)));
                var_30 ^= ((/* implicit */signed char) (((~(arr_16 [i_6] [i_6] [i_6]))) == (((/* implicit */int) ((signed char) (+(arr_5 [i_7] [i_1])))))));
            }
            for (int i_8 = 0; i_8 < 25; i_8 += 2) 
            {
                arr_31 [i_1] [i_1] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)54649)))));
                arr_32 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_6] [i_8])), (4785442134823343305LL)));
            }
            var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_16 [i_1] [i_1] [i_1]) | (((/* implicit */int) (signed char)-8)))))))), (max((max((3599598770214716516ULL), (((/* implicit */unsigned long long int) -765184080964644784LL)))), (((/* implicit */unsigned long long int) (~(arr_28 [i_1] [i_1] [i_1] [i_6]))))))));
            var_32 = ((/* implicit */unsigned long long int) (+(arr_16 [i_1] [i_1] [i_1])));
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            arr_36 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_1])), (13492558691380032552ULL)))) ? (arr_12 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)125)))))))) ? ((((!(((/* implicit */_Bool) 17204032944689935061ULL)))) ? (((((/* implicit */int) (unsigned short)38533)) + (((/* implicit */int) (signed char)16)))) : (max((1731552375), (((/* implicit */int) (signed char)124)))))) : (arr_21 [i_1] [i_1] [i_1]));
            arr_37 [i_9] = ((/* implicit */signed char) ((3127000662432858272ULL) < (2428935197919610793ULL)));
        }
        arr_38 [i_1] = ((/* implicit */signed char) (+(max((((/* implicit */int) (signed char)-93)), (((((/* implicit */int) arr_35 [i_1])) * (((/* implicit */int) (signed char)-48))))))));
        var_33 -= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)27))));
    }
    var_34 = ((/* implicit */signed char) max((((3420802850606095655ULL) % (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_19)), (var_7)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (16456114445632494115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))))) > (((var_2) >> (((((/* implicit */int) (unsigned short)57537)) - (57531))))))))));
}
