/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6589
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((/* implicit */unsigned int) min((-1949377575), ((+(var_2)))))) * (min((min((((/* implicit */unsigned int) arr_3 [i_2] [i_0] [i_0])), (var_5))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
                        {
                            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) 6144U))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((2968365634U) % (min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_0]))))), (1326601634U))));
                        }
                        for (short i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0])))))));
                            var_13 -= ((/* implicit */signed char) var_7);
                            arr_20 [i_1] [i_0] [(_Bool)1] [(short)5] [i_5 - 1] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)0))))), (1994033011U))));
                            arr_21 [i_0] [i_1 - 1] [11U] [i_3] [i_5 + 1] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0 + 1] [(signed char)3] [i_5 + 1]))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_23 [2U] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1])))), (((/* implicit */int) arr_16 [i_1 + 3] [i_1] [i_0 - 1]))))) ? (((/* implicit */int) ((signed char) arr_4 [i_1 + 2] [6ULL]))) : (((/* implicit */int) var_6))))));
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_0] [i_3] [i_3] [i_2] [i_0] [i_0])) ? (min((((/* implicit */unsigned int) min((var_2), (((/* implicit */int) (signed char)-1))))), ((-(var_3))))) : (((((/* implicit */_Bool) min((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 + 1]), (((/* implicit */int) arr_23 [i_0] [i_1 + 4] [(_Bool)1] [(_Bool)1] [i_1 + 4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1] [i_2] [i_2])))) : (var_3)))));
                        }
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            var_16 -= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) ((arr_4 [i_0] [(signed char)12]) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 + 2]))))))), (min((var_9), (((/* implicit */int) arr_3 [i_1] [i_1 + 4] [i_1]))))));
                            var_17 -= ((/* implicit */unsigned int) (+(var_4)));
                        }
                        arr_28 [11] [i_0 + 1] [11] [14U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_18 [i_0 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1 + 4] [i_1 + 4] [i_0 - 1] [i_3] [i_3] [i_0 + 1]))))) ? (((int) (_Bool)1)) : (arr_25 [i_0 + 1] [i_2] [i_1 + 2] [i_0 - 1] [i_0] [i_3] [i_3])));
                        var_18 -= ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_9)));
                    }
                    var_19 -= ((/* implicit */int) ((min((arr_18 [12] [i_1]), (4138083465560722504ULL))) / (arr_18 [i_1 + 3] [(signed char)1])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) min((4138083465560722504ULL), (var_7)))) || (((/* implicit */_Bool) ((unsigned int) var_9)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
    /* LoopSeq 3 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
    {
        arr_33 [i_8] = ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_25 [i_8] [i_8] [i_8] [i_8] [(unsigned char)6] [i_8] [i_8]) : (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) arr_8 [i_8] [i_8]))))))));
        arr_34 [i_8] = ((/* implicit */_Bool) min((((((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) + (arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))), (((((/* implicit */int) arr_8 [i_8] [i_8])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_8] [i_8])))))))));
        var_21 -= ((/* implicit */unsigned int) var_9);
    }
    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        arr_37 [i_9] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) min(((signed char)106), (((/* implicit */signed char) (_Bool)1))))) : (1291558912)))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -902746620)), (1714362725U)))), (18446744073709551604ULL)))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-22)), ((short)(-32767 - 1)))))) * (min((arr_18 [i_9] [i_10]), (((/* implicit */unsigned long long int) var_5)))))))));
                    var_23 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_22 [i_9] [i_10] [i_11]))))));
                }
            } 
        } 
        arr_45 [i_9] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [(short)13] [i_9])) ? (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_12 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [(short)4])))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */_Bool) (+(arr_25 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))) && (((/* implicit */_Bool) min(((+(var_4))), (arr_25 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))))));
        arr_48 [9U] = ((/* implicit */signed char) ((((/* implicit */_Bool) 14308660608148829112ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)13529))));
    }
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (min((266261501U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) min((var_9), (min((var_9), (var_2)))))))))));
}
