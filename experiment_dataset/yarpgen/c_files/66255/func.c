/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66255
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) var_13);
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((arr_0 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((var_10), ((!(((/* implicit */_Bool) (unsigned char)7)))))))));
            var_23 |= ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))) & (var_16))), (((/* implicit */unsigned long long int) min((arr_1 [i_1]), (((/* implicit */long long int) (unsigned short)64795)))))));
            /* LoopSeq 4 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 181613923U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_5 [i_1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))) <= (((((/* implicit */_Bool) (unsigned char)223)) ? (max((11512493429608623889ULL), (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (arr_1 [i_0]) : (-2323843174762505978LL))))), (((((/* implicit */_Bool) ((long long int) var_10))) ? (((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    arr_11 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) ((long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_9 [i_3] [i_1] [i_3] [i_3]))))));
                    var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4113353373U)) ^ (arr_7 [i_0] [i_2 + 4] [i_2])))) ? (((unsigned long long int) arr_7 [i_0] [i_2 + 2] [i_2])) : ((-(arr_7 [i_0] [i_2 + 2] [i_2 - 2])))));
                }
                for (short i_4 = 2; i_4 < 23; i_4 += 1) 
                {
                    arr_14 [i_0] [i_1] [i_1] [i_4 - 2] [i_4 - 2] = (unsigned char)183;
                    arr_15 [i_4 - 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((max((16861235631292377330ULL), (var_15))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_10)))))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)72))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_2 + 3] [i_1] [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) var_18))))) ? (((unsigned int) arr_8 [i_2 + 3] [i_2 + 2] [i_4 - 2] [i_4 - 1] [i_4 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                }
            }
            for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) 
            {
                arr_19 [i_5 - 1] [i_1] [i_1] [i_0] = var_17;
                arr_20 [i_5] [i_5] [i_5] [i_0] &= ((/* implicit */signed char) var_0);
            }
            for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    var_29 = ((/* implicit */int) var_6);
                    var_30 += ((/* implicit */short) ((unsigned long long int) ((unsigned int) ((arr_7 [i_0] [i_6 - 1] [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25553)))))));
                    var_31 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))) ? (((((/* implicit */_Bool) arr_23 [i_6 - 3] [i_6 - 2] [i_6 + 1])) ? (min((15574743449546112331ULL), (((/* implicit */unsigned long long int) arr_21 [i_6 - 1] [i_7] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) (unsigned short)63890)))))))) : (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1] [i_6 - 4] [i_7])))))));
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_23 [i_1] [i_6 + 1] [i_6 - 2]))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) arr_16 [i_0] [i_1])) <= (arr_6 [i_0] [i_7]))))))))))));
                    var_33 = ((/* implicit */unsigned char) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (unsigned char)244))));
                }
                arr_26 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7418866593368414702LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))), ((+(arr_6 [i_0] [i_1])))))) : (((unsigned long long int) ((short) var_0)))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_34 = ((/* implicit */long long int) arr_7 [i_1] [i_1] [i_8]);
                var_35 = ((/* implicit */unsigned long long int) (unsigned char)244);
            }
            arr_29 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15008065529137883398ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))) * (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                {
                    var_36 |= ((/* implicit */unsigned char) ((int) ((unsigned int) arr_16 [i_9] [i_11])));
                    arr_38 [i_9] [i_10] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (-(arr_17 [i_9])))) ? (801038786U) : (min((var_14), (var_14))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_10] [i_11])) <= (((/* implicit */int) arr_12 [i_10] [i_9]))))))));
                }
            } 
        } 
    } 
}
