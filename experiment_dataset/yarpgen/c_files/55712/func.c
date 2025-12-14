/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55712
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 &= ((/* implicit */short) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2])))), ((-(((/* implicit */int) var_4))))))), (((arr_1 [i_0 + 1]) / ((-(1899231849U)))))));
                    var_13 ^= ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) 1073217536)))))) ? (((1911186516274462205LL) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [11ULL])))));
                    var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? (max((((/* implicit */int) var_10)), ((+(((/* implicit */int) var_6)))))) : ((+(((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((arr_5 [i_3] [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) != (max((((/* implicit */unsigned long long int) (signed char)8)), (arr_5 [(unsigned short)12] [(unsigned char)4]))))))));
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    {
                        var_17 &= ((/* implicit */signed char) (-((+(var_3)))));
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)28))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_15 [(_Bool)1] [i_4 + 1] [i_5] [(signed char)1] [i_6]))))))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_5])))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        arr_19 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned char)151))))))) - (min((max((var_3), (((/* implicit */unsigned int) arr_18 [i_7] [i_7])))), (((/* implicit */unsigned int) var_0))))));
        var_19 = ((/* implicit */signed char) var_4);
    }
    var_20 = var_9;
}
