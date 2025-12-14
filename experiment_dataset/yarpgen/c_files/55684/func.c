/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55684
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)36555))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_19)) >> (((/* implicit */int) var_9))))))) ? ((~(var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)41)), (min((((/* implicit */unsigned short) var_5)), (var_14)))))))));
        arr_5 [i_0] = ((/* implicit */short) min(((-(max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_3] = arr_12 [i_0] [i_0] [i_1 + 2] [i_0] [7U] [i_3];
                        arr_17 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 3; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        var_21 = (+(((/* implicit */int) ((unsigned char) arr_2 [i_4 - 3] [i_4 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (arr_3 [i_0] [i_0]))))));
                            var_23 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned char)69)), ((+(max((var_10), (((/* implicit */int) arr_6 [i_0] [6U]))))))));
                        }
                        var_24 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) 4677867923271244229LL)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) (short)29749))));
                        arr_26 [(unsigned char)2] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)181)), ((unsigned short)652)))) * (((/* implicit */int) max((arr_24 [2ULL] [i_4] [i_5] [i_0]), (arr_24 [i_0] [i_4 - 3] [i_5] [i_0]))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_8 [(unsigned short)15] [i_5]))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) var_15)))));
    var_27 = ((/* implicit */signed char) var_18);
    var_28 = ((/* implicit */short) var_4);
}
