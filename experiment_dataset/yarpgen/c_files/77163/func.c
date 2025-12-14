/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77163
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_13)))));
        arr_4 [i_0 + 1] [i_0] = (_Bool)1;
        var_17 = ((/* implicit */unsigned int) var_6);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_10 [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 558551906910208ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4584223689767905636LL)));
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_2] [(_Bool)1])) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)50994)) >= (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) % (arr_17 [i_2]))))))));
                    arr_19 [i_4] [i_4 - 1] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)23022)) ? (-8LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51002)))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_3] [i_2 + 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) : (var_14)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 2; i_6 < 13; i_6 += 1) 
            {
                {
                    arr_26 [i_6 - 1] [i_6] [i_2] = ((/* implicit */int) ((arr_23 [i_6] [i_2 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6])))));
                    arr_27 [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42509)) ? (2073932020U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3862037782U)));
                }
            } 
        } 
        arr_28 [i_2] [i_2] = ((/* implicit */int) (unsigned short)50976);
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)251)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (18446185521802641407ULL) : (8406285202405917029ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))));
    }
    var_22 = ((/* implicit */short) (_Bool)1);
    var_23 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_5)))))) <= (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_13))))));
}
