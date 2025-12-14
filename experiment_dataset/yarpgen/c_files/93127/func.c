/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93127
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
    var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_2)) ? (-2921812398194895974LL) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))), (((/* implicit */long long int) ((-2921812398194895963LL) == (max((var_3), (-4586373363854835397LL))))))));
    var_21 = ((max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_15)) ? (2921812398194895997LL) : (((/* implicit */long long int) var_12)))))) + ((+((~(-2921812398194895974LL))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 + 1]), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62)))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_22 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_0]) + (arr_1 [0]))))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [i_0 + 2]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_6 [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_14))))))) ? (max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) arr_4 [i_1])))) : ((-(((/* implicit */int) arr_4 [10]))))));
        arr_7 [i_1] = ((/* implicit */signed char) (+(arr_5 [i_1] [i_1])));
        var_23 = ((/* implicit */int) arr_4 [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_10 [(signed char)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_9 [i_2] [i_2]), (((((/* implicit */_Bool) var_18)) ? (-2921812398194895974LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))))) ? (arr_5 [(signed char)18] [(signed char)18]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) && (((/* implicit */_Bool) ((2921812398194895977LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))))))))));
        arr_11 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_5 [i_2] [i_2]) : (((/* implicit */int) (signed char)96))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_2] [i_2])))) : ((+((-(arr_9 [i_2] [15LL])))))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_24 = ((((arr_9 [15LL] [i_3 - 1]) > (arr_9 [i_3 + 3] [i_3 + 1]))) ? (min((arr_9 [i_2] [i_3 + 3]), (arr_9 [i_3] [i_3 + 3]))) : (arr_9 [i_3] [i_3 + 2]));
                    var_25 = ((/* implicit */long long int) ((min((arr_15 [i_2] [i_3 - 1] [i_3 + 4]), (arr_15 [(signed char)18] [(signed char)18] [i_3 + 1]))) != ((~(((/* implicit */int) arr_12 [i_3 + 3]))))));
                    var_26 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-63))))) ? (((((/* implicit */_Bool) arr_16 [i_3] [(signed char)1])) ? ((+(((/* implicit */int) arr_16 [i_3 + 1] [i_4])))) : (arr_14 [i_3]))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), (var_13)))) ? (((/* implicit */int) min((var_8), (arr_8 [i_2] [i_3])))) : (((/* implicit */int) ((signed char) arr_14 [i_2])))))));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                {
                    arr_26 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((long long int) ((arr_13 [i_5] [i_5]) == (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (signed char i_9 = 3; i_9 < 15; i_9 += 4) 
                        {
                            {
                                arr_34 [i_5] [i_5] [i_6] [i_7] [(signed char)12] [i_6] = ((max(((!(((/* implicit */_Bool) arr_28 [i_5] [(signed char)4] [i_6] [i_6] [i_5] [i_6])))), (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_11));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_5] [i_6] [i_7] [0] [i_9 - 1]))) % (arr_25 [i_6] [i_7] [i_7] [i_9 + 1])))) ? (((/* implicit */int) min((max((var_10), (var_5))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_5] [i_5])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9] [i_9 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_28 [1LL] [i_9] [0LL] [1LL] [i_5] [i_5]))))))))));
                                var_30 = ((/* implicit */signed char) ((var_1) % (((((/* implicit */_Bool) min((arr_5 [i_5] [16LL]), (1253567081)))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) : (32212254720LL))) : ((+(649931830475670492LL)))))));
                                var_31 = ((/* implicit */signed char) arr_9 [i_9 - 1] [i_6]);
                                var_32 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1])) && (((/* implicit */_Bool) arr_24 [i_9 + 1] [i_9 - 3] [i_9 - 1] [i_9 - 3]))))), ((-(var_11))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(signed char)14])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [(signed char)6] [i_6] [i_7] [i_6] [(signed char)3])))))));
                    arr_35 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_5])) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) var_8)))) : (arr_29 [i_5] [i_6] [i_6] [i_7] [i_7] [i_7])))));
                }
            } 
        } 
    } 
}
