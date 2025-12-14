/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67481
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
    var_13 = ((/* implicit */short) var_3);
    var_14 = min((((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_12))) & (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 1081524465U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1081524473U))) : (((/* implicit */unsigned int) ((var_1) << (((((/* implicit */int) var_4)) - (31119)))))))));
    var_15 = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (var_5))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [19U]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */_Bool) 1081524465U);
            var_17 -= ((/* implicit */long long int) (+(arr_4 [i_0] [14LL] [i_0])));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))));
        }
        for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((max(((-(((/* implicit */int) (short)-1148)))), (((((/* implicit */int) arr_7 [i_2] [1] [i_5])) / (-268894622))))) == (((((/* implicit */int) var_4)) ^ ((-(((/* implicit */int) var_9))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)5] [(_Bool)1] = ((/* implicit */signed char) (-(((arr_0 [i_2 - 1] [i_2 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_19 [i_5] [i_4] [i_4] [i_4] [i_5] [13U] = ((/* implicit */short) ((((/* implicit */int) ((192659863) <= (((/* implicit */int) (unsigned short)11417))))) ^ ((~(((/* implicit */int) (unsigned short)11417))))));
                            var_18 = ((/* implicit */signed char) ((unsigned short) 1081524484U));
                        }
                    } 
                } 
            } 
            arr_20 [i_0] = ((/* implicit */int) arr_0 [(short)16] [i_0]);
            var_19 *= ((/* implicit */unsigned char) (+(min((((/* implicit */int) min((arr_9 [i_0] [18] [i_0]), ((short)9820)))), (arr_1 [i_0])))));
            var_20 *= ((/* implicit */_Bool) var_5);
        }
        var_21 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_21 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1911986144)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2637262151U)))) ? ((-(((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119)))))))) : (arr_5 [i_0]));
    }
    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        var_22 = ((/* implicit */short) (+(((arr_3 [i_6 + 3]) & (arr_3 [i_6 + 1])))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((unsigned int) min((arr_12 [i_6 + 2] [i_6 + 2]), (arr_12 [i_6 - 1] [i_6 - 1]))))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_24 ^= ((/* implicit */int) ((min((1681810352U), (((/* implicit */unsigned int) (unsigned short)11426)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_14 [i_7] [i_7] [i_7 - 1] [i_7] [14]))))));
        var_25 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) arr_5 [i_7 - 1])) - (arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) arr_16 [20ULL] [14LL] [i_8]);
        var_27 = arr_1 [i_8];
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    var_28 = ((/* implicit */int) arr_22 [i_9]);
                    arr_36 [i_10] [i_9] [i_9] = ((/* implicit */signed char) arr_24 [i_8]);
                    var_29 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)5)), ((-(max((((/* implicit */int) var_9)), (arr_15 [17ULL] [i_10] [i_9] [i_8] [i_8])))))));
                    var_30 |= ((/* implicit */signed char) (+(arr_1 [i_8])));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        arr_39 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_11] [i_11 + 1] [(signed char)19])) ? (arr_16 [i_11] [i_11 + 1] [(unsigned short)3]) : (arr_16 [i_11 + 1] [i_11 + 1] [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_16 [(unsigned short)18] [i_11 + 1] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_16 [i_11] [i_11 + 1] [i_11]))));
        arr_40 [i_11] = ((/* implicit */unsigned short) (unsigned char)72);
    }
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
    {
        var_31 = ((/* implicit */unsigned char) 2456845857U);
        arr_44 [(unsigned char)2] = ((/* implicit */short) var_11);
    }
}
