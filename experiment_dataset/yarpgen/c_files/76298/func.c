/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76298
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (signed char)-66))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) : (16916784620064425853ULL)))));
                            var_20 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_3 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_3 + 1] [i_2] [i_3])))), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_0)))) && (((/* implicit */_Bool) max((1266262762439741878ULL), (((/* implicit */unsigned long long int) 2972662181U))))))))));
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (((((/* implicit */_Bool) (+(var_10)))) ? (((var_2) / (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_8 [i_1] [i_1] [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (max((((/* implicit */unsigned long long int) var_17)), ((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_1 [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_6 = 3; i_6 < 8; i_6 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 2])) ? ((~(var_15))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_6 + 2] [i_6]))))));
        var_25 = ((/* implicit */unsigned short) max((433251606), (((/* implicit */int) (unsigned char)255))));
        var_26 = ((/* implicit */unsigned int) var_4);
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_11 [i_6] [i_6] [i_6] [i_6 - 2] [i_6 - 3]))) ? ((~(((/* implicit */int) arr_9 [14ULL] [i_6] [14ULL])))) : (((/* implicit */int) ((_Bool) 772784689U))))))));
    }
    for (unsigned int i_7 = 3; i_7 < 8; i_7 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */int) (((+(var_0))) != (((/* implicit */int) arr_19 [i_7] [i_7]))));
        var_29 = ((/* implicit */signed char) (((-(((/* implicit */int) max((arr_22 [i_7]), (((/* implicit */short) var_4))))))) == ((~(((/* implicit */int) arr_19 [i_7] [i_7]))))));
    }
}
