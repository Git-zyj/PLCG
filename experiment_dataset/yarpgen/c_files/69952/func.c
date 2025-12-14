/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69952
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */long long int) arr_1 [i_0]);
        var_15 -= ((/* implicit */signed char) min((min((7), (((/* implicit */int) (signed char)-127)))), (((/* implicit */int) var_0))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_7 [i_0] [(unsigned char)9] = ((/* implicit */unsigned short) arr_2 [i_0]);
            arr_8 [(unsigned char)2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -1637008281)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59163))) : (((((/* implicit */_Bool) -2888863559895537053LL)) ? (((/* implicit */long long int) -1752696898)) : (3611043384254269470LL)))))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0])), (var_2)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (var_11))))))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_17 = ((/* implicit */signed char) max((min(((~(var_11))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2]))));
            var_18 = ((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2]))));
        }
        arr_11 [(_Bool)1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? ((-((~(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))));
    }
    for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3611043384254269470LL)), (14ULL)))) ? (var_5) : (((/* implicit */long long int) arr_12 [i_3]))));
        var_20 = max((var_12), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    }
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (+(-2888863559895537053LL)));
                    arr_25 [i_4] [(unsigned char)1] [i_4] = (+(((/* implicit */int) arr_13 [(unsigned short)13])));
                }
            } 
        } 
        arr_26 [i_4] [i_4] = ((/* implicit */int) arr_16 [i_4] [i_4]);
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_11))));
    }
    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) /* same iter space */
    {
        var_23 *= arr_18 [(unsigned char)16];
        var_24 = ((/* implicit */unsigned long long int) arr_14 [i_7]);
        var_25 = ((((/* implicit */_Bool) 23ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((var_3), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (max((var_2), (var_2))) : (arr_27 [i_7] [i_7])))))))));
        arr_29 [i_7] = ((/* implicit */signed char) arr_17 [i_7] [i_7]);
    }
    var_27 = ((/* implicit */long long int) max((var_2), (min((var_9), (((/* implicit */int) var_4))))));
    var_28 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(min((var_2), (((/* implicit */int) var_13))))))), ((+(var_1)))));
    var_29 |= ((/* implicit */_Bool) var_12);
    var_30 = ((/* implicit */unsigned short) (+(max(((~(var_3))), (((/* implicit */long long int) var_0))))));
}
