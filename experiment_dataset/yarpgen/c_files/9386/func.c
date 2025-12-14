/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9386
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
    var_20 = ((((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-4148126593659250772LL)))) * (((((/* implicit */_Bool) ((var_10) % (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */long long int) ((/* implicit */int) (short)28585))) | (7116104512930103998LL))))));
    var_21 = ((/* implicit */unsigned char) max((-7116104512930103998LL), (((long long int) (!(((/* implicit */_Bool) var_7)))))));
    var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) 721411222U)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned short) var_3)))))) : (1664035167U))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7967))) : (-7116104512930103977LL))) > (((long long int) (short)28562)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_23 = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) <= (7116104512930104016LL)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) -2913977522753388318LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) max(((short)-31495), (((/* implicit */short) (signed char)90))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) var_14))))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [(unsigned short)8] [(unsigned short)8] [(short)0] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_2] [i_3]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7973))) == (var_18))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38632))))))) : (((/* implicit */int) (signed char)127))));
                                arr_16 [(unsigned short)0] [i_0] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2])))))))));
                                arr_17 [i_0] [(short)4] [i_2] [i_4] [6LL] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(-9176800274387362280LL)))) & (((unsigned long long int) ((unsigned short) (short)10359)))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) ((unsigned short) arr_4 [i_3] [i_0]))) : (max((((/* implicit */int) (short)29660)), ((~(((/* implicit */int) (unsigned char)1))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_12 [i_2] [(unsigned short)1] [i_2] [i_1] [i_0] [(unsigned short)0]))) ? (((/* implicit */int) ((signed char) 0LL))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) & (2147483647)))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        var_27 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (signed char)127))))) ? (((7116104512930103998LL) - (((/* implicit */long long int) ((/* implicit */int) var_19))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_15))))))));
        var_28 = ((/* implicit */short) ((unsigned char) max((arr_19 [i_5]), ((short)-21845))));
    }
}
