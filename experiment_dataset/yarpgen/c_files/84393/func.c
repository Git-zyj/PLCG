/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84393
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
    var_13 = ((/* implicit */signed char) min((var_5), (max((var_3), (((/* implicit */int) var_1))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) == (((((/* implicit */unsigned long long int) var_4)) | (arr_2 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 856269499U)) || (((/* implicit */_Bool) 902273565))));
        var_16 *= ((/* implicit */signed char) (-(arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(4435063008983518587LL)))) ? (((arr_5 [i_1]) ^ (((/* implicit */long long int) 154608147)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42)))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 960937277)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) ((6251438335073462897ULL) != (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)32768)) >= (((/* implicit */int) arr_17 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4])))) ? (arr_12 [i_1] [i_2] [10U] [i_1]) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_13 [14U] [i_4])) : (((/* implicit */int) (unsigned short)6568))))))) : (max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) arr_9 [i_1] [(signed char)0])))))))));
                        arr_18 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((min((arr_4 [i_3 + 1]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1]))))))) : (((/* implicit */unsigned long long int) min((min((arr_0 [i_2]), (((/* implicit */unsigned int) arr_1 [i_1])))), (((/* implicit */unsigned int) arr_12 [i_3 + 1] [i_3 - 1] [i_2] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) (~(4294967276U)));
    }
}
