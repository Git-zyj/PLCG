/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77008
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) (((_Bool)1) ? (1109588353U) : (1668163128U)))) ? (min((3185378949U), (((/* implicit */unsigned int) 1097438559)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229)))))))) - (1097438552U)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_12 = (!(((/* implicit */_Bool) (unsigned char)26)));
        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)13575))));
        var_14 -= ((/* implicit */unsigned char) (~(((((/* implicit */int) (short)-6580)) & (((/* implicit */int) (short)-22133))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (-(((3003909524U) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                    arr_6 [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)8);
                    arr_7 [(unsigned short)0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 3283817742U))));
                }
            } 
        } 
        arr_8 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)42578)) : (((((/* implicit */_Bool) (unsigned char)33)) ? (2147483647) : (((/* implicit */int) arr_3 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max(((~(var_0))), (((/* implicit */unsigned long long int) (unsigned char)38)))))));
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_3])), (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_2 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229)))))));
                    var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) (!(((((/* implicit */int) arr_12 [i_5] [i_4])) <= (1515457709))))))))));
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 1) 
        {
            arr_22 [i_7 + 2] [i_6] [i_6] = ((/* implicit */unsigned short) (short)-30589);
            arr_23 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (short)30471)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_6] [i_6])))));
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            arr_26 [i_6] [i_8] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)))) : (arr_18 [i_6])));
            var_19 = ((/* implicit */short) var_6);
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        {
                            arr_38 [i_6] [i_11] [i_10 - 1] [i_9] [i_6] = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) var_4)) ? (8613564940165028478LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-31))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                            arr_39 [i_11] [i_6] [i_6] = (i_6 % 2 == zero) ? (max(((~(((/* implicit */int) arr_19 [i_12] [i_10 - 1])))), (((((((/* implicit */int) arr_19 [i_9] [i_12])) + (2147483647))) >> (((((/* implicit */int) arr_36 [i_6] [i_9] [i_10 - 1] [i_6] [i_12])) - (96))))))) : (max(((~(((/* implicit */int) arr_19 [i_12] [i_10 - 1])))), (((((((/* implicit */int) arr_19 [i_9] [i_12])) + (2147483647))) >> (((((((/* implicit */int) arr_36 [i_6] [i_9] [i_10 - 1] [i_6] [i_12])) - (96))) - (55)))))));
                            var_20 = ((/* implicit */signed char) 262143ULL);
                        }
                    } 
                } 
            } 
            arr_40 [8U] [8U] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) <= ((((((_Bool)1) || (((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)207)))))) : (((((/* implicit */_Bool) (unsigned char)49)) ? (arr_2 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 2) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) << (((arr_42 [i_13 + 1] [i_13 - 1]) + (1188432809)))));
            arr_43 [i_13 - 1] [i_6] [i_6] = ((/* implicit */short) ((_Bool) var_1));
        }
        arr_44 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) & (((/* implicit */int) (short)-5898))))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (18446744073709289472ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2127244701U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_6]))))))))));
    }
}
