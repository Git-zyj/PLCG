/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88527
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
    var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)27))))) % (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) * (((/* implicit */unsigned long long int) max((((var_0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    var_16 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((~(var_8)))))), (min((((/* implicit */unsigned long long int) var_6)), (var_12)))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_9)))) >> ((((-(((/* implicit */int) var_2)))) - (83)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 4807670852522648233ULL)) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_19 *= ((/* implicit */_Bool) (~(((unsigned long long int) var_10))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))));
                var_21 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) arr_1 [i_0])))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_9))));
                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)30)), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */int) arr_7 [i_3] [i_1] [i_1]))))))));
                arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) 3146760005591582326ULL);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_6 [i_0]))))))) & (min(((+(15870808725367863887ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_7)), (var_5))))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_18 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (arr_11 [i_0] [i_0] [i_0] [i_0]))))), (((((unsigned long long int) var_14)) / (max((((/* implicit */unsigned long long int) var_11)), (var_12)))))));
                var_24 = ((/* implicit */_Bool) var_7);
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_7 [i_0] [i_1] [i_1]))));
                arr_19 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) 10307472358371463840ULL)))), (arr_1 [i_0])));
            }
            arr_20 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_12 [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))))) ? (min((((/* implicit */int) var_7)), (arr_4 [(unsigned short)7] [(unsigned short)7]))) : ((~(arr_4 [i_1] [i_0])))))) ? (((((/* implicit */_Bool) (unsigned short)24440)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) arr_12 [(short)18] [i_0] [i_0] [i_1])), (var_12)))))));
            arr_21 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
        }
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned long long int) var_9))) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (arr_17 [6] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        arr_29 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4724))))) ? (((/* implicit */int) arr_7 [i_0] [i_5 - 1] [i_6])) : (((/* implicit */int) arr_24 [i_5 + 2] [i_5 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7] [i_5 - 1]))) : ((+(max((((/* implicit */unsigned long long int) arr_6 [i_0])), (arr_11 [i_0] [i_5 - 1] [i_6] [1])))))));
                        var_27 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_13)) ? (var_12) : (min((arr_25 [i_0] [i_5] [(signed char)8] [i_7]), (arr_22 [i_0] [8ULL] [i_6])))))));
                        arr_30 [i_0] [i_5 + 1] [i_5] = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) var_7)), (arr_17 [i_0] [i_5 + 2] [i_5 + 3])))));
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_5 + 1])) : (((/* implicit */int) arr_10 [i_5 + 2])))))));
                    }
                } 
            } 
        } 
    }
}
