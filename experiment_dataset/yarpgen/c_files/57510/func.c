/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57510
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [(signed char)3] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (var_6)))), (max((-6345655348474756288LL), (((/* implicit */long long int) (unsigned char)8)))))), (((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_7);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) var_9);
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) ((signed char) max((var_8), (var_2))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [(unsigned char)6] [i_2] [i_2] [(short)15] [i_1] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) var_8)))))))), (max((((/* implicit */unsigned int) (unsigned short)2291)), (4294967295U)))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(max((var_9), (((/* implicit */unsigned int) var_10))))))), (min((var_11), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2291))))))))))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))), (min((max((((/* implicit */long long int) var_6)), (6345655348474756291LL))), (((/* implicit */long long int) max(((unsigned short)63238), ((unsigned short)65534))))))));
            }
            var_16 += ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) (signed char)62)));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            var_17 |= ((/* implicit */short) ((_Bool) (unsigned short)51452));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_11))));
        }
        for (unsigned int i_7 = 3; i_7 < 17; i_7 += 3) 
        {
            var_19 &= min((min((((/* implicit */unsigned int) ((unsigned char) var_14))), (min((3599416426U), (4294967290U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_12))))))));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_14)), (var_5))))))), (max((max((7510985430987407957LL), (((/* implicit */long long int) (signed char)-19)))), (((/* implicit */long long int) var_13)))))))));
            arr_26 [i_1] = ((/* implicit */_Bool) (-(max((min((((/* implicit */long long int) var_14)), (-6311616731495039539LL))), (((/* implicit */long long int) 0U))))));
        }
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((min((3442698092111844064LL), (((/* implicit */long long int) 4294967272U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))))))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    {
                        arr_36 [i_8] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max(((~(4294967267U))), (((/* implicit */unsigned int) var_0))));
                        arr_37 [i_1] [i_1] [i_9] [i_1] = ((/* implicit */long long int) (+(2999682613U)));
                        var_22 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (+(-658542475))))));
                    }
                } 
            } 
            arr_38 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) max((var_2), (((/* implicit */signed char) var_14)))))))), (max((var_11), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (var_4))))))));
        }
    }
    var_23 = ((/* implicit */_Bool) ((short) ((unsigned int) ((signed char) var_13))));
}
