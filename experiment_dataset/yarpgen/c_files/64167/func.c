/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64167
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
    var_20 &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    var_21 -= ((/* implicit */_Bool) ((var_19) ? (((((/* implicit */_Bool) ((unsigned long long int) 1842657256))) ? (((((/* implicit */_Bool) (unsigned short)60446)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_14)) - (((/* implicit */int) var_1)))))) : (((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_5)))) / (((((/* implicit */int) var_16)) * (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (!(min((arr_1 [i_0] [i_0]), ((!((_Bool)0)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_0])), (max((-1835825848), (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_10 [(_Bool)0] &= ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    arr_11 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) min((max((var_18), (((/* implicit */unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) max((var_19), (arr_3 [i_1]))))));
                    var_22 = ((/* implicit */unsigned char) arr_9 [i_2]);
                    arr_12 [i_0] [i_0] = ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((unsigned char) (_Bool)1))));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_17 [i_4] = ((((((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_4)))) != (((/* implicit */int) min((var_9), (((/* implicit */signed char) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4])) && ((_Bool)1)))) : (((((/* implicit */_Bool) 1156680678)) ? (2145386496) : (((/* implicit */int) (_Bool)1)))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1)))), (((((/* implicit */_Bool) 12931385663423715113ULL)) ? (arr_6 [i_3] [i_4]) : (((/* implicit */int) var_10))))))) ? ((~((((_Bool)0) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_0 [i_4])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            arr_21 [i_3] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_5]))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)61566)) : (((/* implicit */int) (unsigned short)38392))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_5])) >= (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) arr_16 [i_3] [i_5]))));
            var_25 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) (_Bool)0))))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))));
            arr_22 [i_5] = ((arr_3 [i_3]) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) arr_3 [i_3])));
        }
        for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            arr_25 [i_3] &= ((/* implicit */unsigned char) arr_20 [i_6]);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)61))));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_28 -= ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) * (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5515358410285836490ULL)))))));
            var_29 ^= ((/* implicit */_Bool) (-(max((5515358410285836510ULL), (((/* implicit */unsigned long long int) (unsigned short)65531))))));
        }
        var_30 = ((/* implicit */unsigned char) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
        var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15360))) == (5515358410285836490ULL));
        var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_15 [i_3]), ((unsigned short)4032))))));
    }
}
