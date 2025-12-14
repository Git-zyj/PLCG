/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76599
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
    var_12 = min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) var_10)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    for (int i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_2] [i_3 + 1] [i_3 + 3] [i_4 - 1])) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [i_3 + 2] [(signed char)4] [i_4 - 3])) : (var_6))) & (((/* implicit */unsigned long long int) (-(arr_10 [(unsigned char)2] [i_3 - 1] [8] [i_4 - 2]))))));
                            arr_11 [i_0] [i_1] [i_0] [i_4] [i_4 - 1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))))) ? ((-((-(arr_8 [i_0] [i_0] [i_4] [i_3]))))) : (((/* implicit */unsigned int) arr_5 [i_0] [i_0]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                for (int i_6 = 4; i_6 < 11; i_6 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)0)))) ? (var_11) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_4)))))))))));
                        var_15 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) 276174985))), (((((/* implicit */_Bool) -276174985)) ? (var_6) : (2594344035656542274ULL))))));
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((276174970) + (max((-276174971), (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_6] [i_0] [i_0]))))))));
                            var_17 = -276174986;
                            var_18 = (short)(-32767 - 1);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_6 - 3] [i_6] [i_6 - 2] [i_6])))));
                            var_20 = min((((signed char) (+(((/* implicit */int) var_4))))), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [4ULL] [i_5]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 276174991)) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_1))))))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) ((var_0) < (0ULL))))))), (min((arr_21 [i_0] [i_1] [i_5]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))));
                            var_22 = ((/* implicit */short) (unsigned char)15);
                        }
                        for (unsigned short i_10 = 1; i_10 < 13; i_10 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -276174970)) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) max((((/* implicit */short) var_4)), (var_2))))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)-26)), (276174973))) / (((/* implicit */int) arr_27 [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_6] [i_10 + 1]))))))))));
                            var_24 = max((min((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))), (max((((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])), (-276174991))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_10 + 1])) ? (((/* implicit */int) (short)32767)) : (-276174991))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    for (int i_13 = 2; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_25 += ((/* implicit */signed char) (short)4690);
                            var_26 ^= ((/* implicit */_Bool) arr_1 [i_0] [(signed char)9]);
                        }
                    } 
                } 
            } 
            arr_37 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_1] [(_Bool)0])))), (((/* implicit */unsigned long long int) (unsigned char)10))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_1] [i_1] [i_0]))))), (1030567651U)))) : (((6502386247160630367ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */int) arr_16 [i_1] [(short)13])))))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (_Bool)1))));
        }
        for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            arr_40 [i_0] [i_14] = ((/* implicit */int) (unsigned char)238);
            var_28 = ((/* implicit */unsigned long long int) ((arr_21 [i_0] [i_14] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))) > (var_11)))))))));
        }
        var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 276174985)) ? (arr_5 [i_0] [(signed char)12]) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (short)30628)) ? (((/* implicit */unsigned long long int) var_3)) : (10521516945230121057ULL)))))) ? (min((var_0), (((/* implicit */unsigned long long int) -276174985)))) : (((var_6) & ((-(var_11)))))));
    }
}
