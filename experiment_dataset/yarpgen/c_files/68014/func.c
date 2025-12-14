/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68014
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(max((var_6), (arr_1 [i_0] [i_0])))))), (var_7)));
                        var_11 *= ((/* implicit */unsigned long long int) ((int) 3815818255837291306ULL));
                        arr_12 [(unsigned short)14] [i_1] [22ULL] [i_3] [17] = ((/* implicit */unsigned long long int) (~(((int) -158163015))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                {
                    var_12 = max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15612521381101676836ULL)) ? (6) : (var_3)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)32729)) : (arr_7 [i_4] [i_4]))) : (((/* implicit */int) arr_14 [i_4 + 3] [i_4])))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_7 [i_4] [i_0]))));
                    var_14 = ((/* implicit */int) min(((unsigned short)36108), ((unsigned short)53886)));
                    var_15 = ((/* implicit */int) (((-(143552238122434560ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) var_9)))) : (arr_1 [i_0] [i_5]))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36119))) * (8588696065300751789ULL)))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                {
                    var_17 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_20 [i_6] [0]) & (((/* implicit */unsigned long long int) arr_5 [i_6] [(unsigned short)17]))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_6] [i_6]) : (((/* implicit */int) arr_16 [i_8] [i_6] [i_6] [i_6])))) : (arr_5 [i_8] [i_7])))), (((((/* implicit */_Bool) (unsigned short)11668)) ? (var_1) : (4124949375644599035ULL))));
                    var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) arr_7 [i_6] [i_8])) & (18303191835587117042ULL))), (((/* implicit */unsigned long long int) ((arr_7 [i_7] [i_7]) == (arr_7 [i_6] [i_7]))))));
                    arr_27 [i_7] = ((((((/* implicit */_Bool) (~(1073741824)))) ? (((((/* implicit */unsigned long long int) arr_19 [i_8] [(unsigned short)5])) | (15612521381101676836ULL))) : (var_1))) & (((/* implicit */unsigned long long int) (~(4)))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) ((((/* implicit */_Bool) arr_19 [i_7] [i_6])) ? (((/* implicit */int) (unsigned short)768)) : (var_3))))));
                    var_20 ^= ((/* implicit */unsigned short) (((+(max((((/* implicit */unsigned long long int) arr_23 [i_6])), (var_1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */int) arr_11 [i_6] [22] [i_7] [i_8])), ((-2147483647 - 1)))) : (((8) & ((-2147483647 - 1)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) var_8);
                        arr_35 [i_6] [i_9] [i_9] [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9]))))), ((!(((/* implicit */_Bool) arr_20 [0] [0]))))))) - (-29)));
                        var_22 = ((int) ((unsigned long long int) ((18303191835587117075ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(unsigned short)4] [i_9] [i_10] [i_11]))))));
                        var_23 = (+(arr_5 [i_6] [i_9]));
                    }
                } 
            } 
        } 
        arr_36 [i_6] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_6)) ? (arr_13 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) var_2)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24342)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)36108))))))), (((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_6 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))))))));
        arr_37 [(unsigned short)3] [i_6] = var_3;
        var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (((((/* implicit */unsigned long long int) (-2147483647 - 1))) & (arr_21 [i_6] [i_6] [i_6]))) : (max((arr_17 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */unsigned long long int) -50584504)))))), ((~(min((((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_6] [i_6])), (var_8)))))));
    }
    var_25 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((int) -1622628360))))))));
    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_6))));
    var_27 = ((/* implicit */unsigned long long int) var_4);
}
