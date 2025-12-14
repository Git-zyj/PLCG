/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5579
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((short) ((unsigned char) var_15)))), (((unsigned int) ((int) var_8))))))));
    var_21 = var_19;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((_Bool) arr_0 [i_0] [i_0]))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) arr_1 [i_0 + 2] [4ULL]))) < (((0LL) << (((-1LL) + (34LL))))))))));
        var_23 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) var_8))) - (((/* implicit */int) (unsigned short)56538)))) + ((-(arr_1 [i_0 + 3] [10ULL])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_3 [i_3]))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)23565)) != (((((/* implicit */_Bool) arr_9 [i_4 - 2] [i_3 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_4 - 1] [i_3 - 1]))))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((unsigned short) ((signed char) arr_5 [i_1]))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (arr_9 [i_1] [i_1])));
                    }
                } 
            } 
        } 
        var_28 = arr_11 [i_1];
        var_29 &= ((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1] [i_1]);
        var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) var_19))))))), (max((((unsigned long long int) var_12)), (((/* implicit */unsigned long long int) ((unsigned short) var_7)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) (-(((unsigned int) arr_8 [i_1] [(unsigned short)2] [(unsigned short)2] [i_1]))));
            arr_16 [i_5] [i_5] = ((/* implicit */unsigned int) min(((((((_Bool)1) ? (((/* implicit */int) arr_9 [(unsigned char)3] [(unsigned char)3])) : (arr_4 [i_5]))) % (((((/* implicit */int) arr_8 [(signed char)6] [i_1] [i_5] [i_5])) << (((/* implicit */int) arr_8 [i_1] [5] [i_5] [i_1])))))), (((int) (unsigned char)126))));
            var_32 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) ((_Bool) arr_11 [i_1]))) : (((/* implicit */int) ((_Bool) var_9)))))));
            var_33 = ((/* implicit */unsigned short) (+(-207768263)));
        }
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_14 [i_1] [i_6])) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_18 [i_1] [i_6]))))) : ((+(((/* implicit */int) arr_3 [i_6]))))))));
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) arr_1 [i_1] [i_1])))));
            var_36 += ((/* implicit */unsigned long long int) arr_9 [(short)6] [7]);
            arr_21 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
        }
    }
    for (signed char i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        arr_26 [(unsigned short)2] = ((/* implicit */short) arr_24 [(_Bool)1]);
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_7 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7 + 1]))))) : (((/* implicit */int) ((short) arr_23 [i_7 - 1])))));
    }
}
