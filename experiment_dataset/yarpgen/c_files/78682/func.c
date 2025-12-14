/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78682
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */int) max((((3635151303U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))))), (((/* implicit */unsigned int) min((((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((3772445U) - (3772414U))))), ((+(((/* implicit */int) (_Bool)1)))))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) && (((/* implicit */_Bool) max(((signed char)46), (((/* implicit */signed char) arr_1 [i_0 - 1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_8);
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-100)))))))) && ((!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_1))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 3; i_4 < 12; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        arr_19 [i_3] [i_3] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_2] [i_4] [i_5]) : (((/* implicit */unsigned int) 513784934))))) ? ((+(var_2))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [i_5])))))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_1))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) 1468789896))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2]))) : (var_0)));
        /* LoopSeq 2 */
        for (int i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
        {
            arr_24 [i_6] [i_6] = ((/* implicit */short) 269574895733166515LL);
            var_17 += ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_0));
            var_18 += ((/* implicit */unsigned int) arr_6 [i_6 - 1]);
        }
        for (int i_7 = 1; i_7 < 13; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4155375867U)) ? (((/* implicit */int) (signed char)0)) : (1663472448)));
                        var_20 *= ((/* implicit */signed char) (-(((/* implicit */int) (!(var_11))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                for (unsigned int i_11 = 3; i_11 < 12; i_11 += 3) 
                {
                    {
                        arr_38 [i_2] [i_7] [i_10] [i_11 - 3] = var_0;
                        var_21 += ((/* implicit */long long int) ((var_7) >> (((-2340858505918713229LL) + (2340858505918713238LL)))));
                    }
                } 
            } 
        }
    }
    for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        arr_41 [i_12] = ((/* implicit */int) ((arr_40 [i_12]) & (((((/* implicit */_Bool) arr_39 [i_12])) ? (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (1496909219U)))));
        arr_42 [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) min(((signed char)-54), (arr_39 [i_12]))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        arr_46 [i_13] = ((/* implicit */unsigned int) arr_1 [i_13]);
        arr_47 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) -1347986745)) ? (((/* implicit */int) (short)17207)) : (((/* implicit */int) (short)-27941))))));
    }
}
