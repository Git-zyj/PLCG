/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68668
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0] [(unsigned short)8])))), (min((((/* implicit */unsigned long long int) arr_1 [i_1] [i_0])), (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [6LL])) && (((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))), (((/* implicit */int) (short)-1))))) ? (-1609973751165063048LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))));
        }
        arr_5 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_3 [1LL] [1LL])))));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 3; i_3 < 22; i_3 += 4) 
        {
            arr_10 [(unsigned short)14] [i_3] = ((/* implicit */signed char) arr_8 [i_2]);
            var_21 = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */unsigned int) 1602028117)) : (1254282437U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (arr_9 [i_2] [i_3]))))))), (((short) min((((/* implicit */int) arr_7 [9U] [i_3])), (arr_8 [i_3]))))));
            var_22 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 3]))))));
        }
        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-4)) - (((/* implicit */int) (signed char)119))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (int i_7 = 3; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7 - 3] [i_7 + 1] [i_7 - 3] [i_4] [i_2]))) <= (arr_18 [i_7 - 3] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_6])));
                            arr_25 [i_7] [i_6] [i_5] [i_4] [i_7] = ((/* implicit */unsigned int) ((arr_22 [i_2] [i_2] [i_5] [19] [i_7 - 3] [i_7 - 3]) && (((/* implicit */_Bool) (unsigned char)133))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((140317248520590462LL) + (((/* implicit */long long int) 4294967276U))));
                arr_26 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_4])) * (((/* implicit */int) (signed char)0))));
            }
            var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) ((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))))))), ((-(((arr_17 [13]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_2] [i_4])))))))));
        }
        arr_27 [(unsigned short)12] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_2])) != (((/* implicit */int) arr_19 [(unsigned short)4] [i_2] [i_2] [i_2] [i_2]))))), ((-(((/* implicit */int) arr_13 [i_2]))))));
        arr_28 [i_2] = ((/* implicit */short) ((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) - (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
        arr_29 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_11 [i_2] [(unsigned char)7] [i_2])))))) ? (((/* implicit */int) arr_15 [i_2])) : (((arr_8 [i_2]) % (((/* implicit */int) max(((unsigned char)125), (((/* implicit */unsigned char) (signed char)-115)))))))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(unsigned short)2] [13LL] [i_2] [i_2] [(unsigned short)13])) ? (min((((arr_9 [(unsigned short)4] [i_2]) | (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)21957))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))), (((/* implicit */int) arr_15 [i_2])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)27980))) <= (7580953781024738448LL)));
        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_8] [i_8 + 1] [i_8] [i_8]))) ^ (arr_17 [i_8 + 1])));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) arr_21 [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_9] [i_12 + 1]);
                        arr_44 [i_12] [i_12] [i_12] [i_12] [i_12] [i_9] = ((/* implicit */unsigned short) (unsigned char)144);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_12 + 1])) <= ((+(((/* implicit */int) (short)-27963))))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9])) ? (((/* implicit */int) (_Bool)0)) : (arr_8 [6ULL])))) ? (((/* implicit */int) arr_41 [i_9 + 1] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) arr_13 [i_9]))));
    }
    var_33 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))), ((~(((var_16) * (((/* implicit */unsigned long long int) var_4))))))));
    var_34 = ((/* implicit */short) var_9);
    var_35 = min((7580953781024738448LL), (7676324055490929379LL));
}
