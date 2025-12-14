/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72795
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((-(((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */int) var_12)) | (-1)))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
                arr_5 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_16)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 1)))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((var_18), (((long long int) (~(var_4))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((int) max((var_14), (((/* implicit */int) var_13))))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (var_0))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) arr_7 [i_3 + 2] [i_4 - 1] [i_4 - 1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((_Bool) var_3));
    var_22 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 2 */
    for (short i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) arr_17 [i_5])) < ((-(var_3))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1)), (4671246601079039498LL)))), (arr_19 [i_5 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18931))))))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            arr_23 [i_6] = ((/* implicit */unsigned long long int) max((-1), (-1)));
            arr_24 [i_5] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) 2059749136975082616LL)) ? (-6851152272788156062LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46604))))), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) (unsigned short)58475)))), ((!(((/* implicit */_Bool) var_4)))))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+(var_14))))));
        }
        for (long long int i_7 = 2; i_7 < 10; i_7 += 4) 
        {
            arr_27 [i_5] [i_5] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) 1)), ((-(6135115461111032241LL)))))));
            var_25 += ((unsigned short) ((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5 + 2] [i_5 + 2])) ? (arr_11 [i_5 + 2] [i_7 + 1] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    for (short i_8 = 1; i_8 < 10; i_8 += 2) /* same iter space */
    {
        arr_31 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((max((((/* implicit */unsigned long long int) -1)), (var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_38 [i_8] [i_8] [i_10] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) ((unsigned char) var_8))))))));
                    var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_8 - 1]))) ? ((-(((/* implicit */int) var_11)))) : ((~(((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_15)))))))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) (~(0)))))))));
}
