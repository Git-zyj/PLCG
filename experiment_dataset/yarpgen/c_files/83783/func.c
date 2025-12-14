/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83783
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min(((((!((_Bool)1))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_10)))), ((+(var_6)))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (8454074879166452158LL)))) ? (((((/* implicit */_Bool) 1099511627775LL)) ? (((/* implicit */unsigned int) arr_2 [i_0] [i_0])) : (1811384958U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)6] [(unsigned short)6])) || (((/* implicit */_Bool) var_13)))) || (((_Bool) (unsigned char)151))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) var_5)))))));
        arr_6 [i_0] [16LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (((int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        arr_11 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (1464599187089519206ULL)));
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3])) ? (((/* implicit */int) arr_18 [i_3])) : (var_6)));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 21; i_5 += 4) 
                        {
                            var_22 *= ((/* implicit */short) 16982144886620032402ULL);
                            var_23 *= ((/* implicit */_Bool) (-(var_0)));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_4))));
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) 488264189641973430LL);
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        arr_27 [i_6] &= ((/* implicit */signed char) (-(((/* implicit */int) (!((_Bool)1))))));
        arr_28 [i_6] = ((/* implicit */long long int) max((max((var_3), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_16 [i_6] [i_6] [i_6])) : (4305928973375899964ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(unsigned short)23] [i_6] [i_6] [i_6] [i_6])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
        arr_29 [i_6] = ((/* implicit */unsigned int) (_Bool)1);
        arr_30 [i_6] &= ((/* implicit */unsigned short) ((2721193012U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29)))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_6] [i_6] [i_6] [i_6] [i_6]))))))))));
    }
    var_27 = var_2;
    var_28 = ((/* implicit */int) var_3);
    var_29 = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) (_Bool)1)))));
    var_30 &= ((/* implicit */long long int) (signed char)110);
}
