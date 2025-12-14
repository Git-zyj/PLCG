/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56314
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [17LL] [17LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) ^ (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51728)))))));
        arr_5 [1ULL] = ((/* implicit */unsigned short) (-(0)));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_10 [(unsigned char)9] [i_2] [7LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)5627)) / (((/* implicit */int) min((((/* implicit */unsigned short) (short)-5628)), ((unsigned short)57539))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_7)))))))));
                /* LoopSeq 2 */
                for (short i_3 = 3; i_3 < 19; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 7716037795868013084LL)) ? (((/* implicit */int) (signed char)109)) : (8388608)))) != (min((((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)70))))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-5628)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_2]))));
                        var_20 = ((/* implicit */signed char) (-(((int) var_4))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            arr_18 [2LL] [i_4] [i_2] [i_2] [20U] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) / (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) : (var_11)));
                            arr_19 [i_2] [i_4] [i_3 - 1] [(unsigned char)2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (+(arr_6 [i_4]))))));
                        }
                    }
                    var_21 = ((/* implicit */signed char) (-(min((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), ((-(var_10)))))));
                }
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((unsigned char) var_13)))) ? (((/* implicit */int) var_14)) : (min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (unsigned short)7997)) / (-53329546)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_23 &= (-((+((-(((/* implicit */int) var_16)))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((unsigned short) (~(((unsigned long long int) 2967436384537695575LL))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned int i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))))), (((/* implicit */unsigned long long int) arr_27 [i_1] [i_1 - 2] [i_11 + 2] [i_10] [i_11] [i_9 - 2] [i_9])))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 869724149U)) ? (((/* implicit */long long int) 2101179772)) : (1700263049051733931LL))))))))));
                                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17411)) ? (4178962599771029265LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)5628)))))))));
                                var_27 = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) arr_35 [i_1 - 1] [i_1 - 1] [i_9] [i_2] [i_11] [i_9 - 2] [i_9])) ? (var_15) : (((/* implicit */unsigned long long int) 1621983284U)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (16675006626478655029ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (var_9)))) : (max((var_0), (((/* implicit */unsigned long long int) var_13))))))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) var_6))))) ? ((-(var_17))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_13)) : (3713019701703792467LL)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) var_2)) + (var_10))), (((/* implicit */long long int) (~(((/* implicit */int) (short)5627))))))))));
                var_29 = ((/* implicit */int) var_11);
            }
        } 
    } 
    var_30 = ((/* implicit */long long int) var_1);
    var_31 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((short) var_5)))))));
    var_32 = ((/* implicit */_Bool) (-(var_12)));
}
