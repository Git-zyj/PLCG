/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55950
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = (-(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) -1832786485)) : (-1740461593338839243LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
        arr_4 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((unsigned char) -365513294))) ? (var_8) : (var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_5)))) ? (arr_1 [2ULL]) : (((/* implicit */int) (signed char)-30)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_1 [(unsigned short)10]) : (arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_11 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_7)), (arr_3 [i_1])))))), ((-(1740461593338839253LL)))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) var_7);
            var_12 = ((/* implicit */long long int) ((((/* implicit */int) (((+(473238308))) <= (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])))))))) < (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))));
            var_13 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (arr_9 [i_2]))))) : ((~(var_9)))))));
        }
        for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) 
        {
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_9 [1])))) ? ((-(((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 4294967295U)) : (arr_6 [i_1 - 1])))) ? (((/* implicit */int) ((signed char) 1740461593338839238LL))) : (((-1832786485) ^ (((/* implicit */int) (unsigned char)142))))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
            var_14 = ((-40331112) & (40331099));
            arr_15 [i_1 + 1] [i_1 + 1] = ((/* implicit */short) arr_2 [16U]);
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            arr_19 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 638606672)))))) ? (((/* implicit */unsigned long long int) (~(max((var_9), (((/* implicit */unsigned int) -365513294))))))) : (((((/* implicit */_Bool) arr_7 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)59036))))) : (((unsigned long long int) (_Bool)1))))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(((/* implicit */int) var_1)))))));
        }
    }
    for (signed char i_5 = 3; i_5 < 11; i_5 += 1) 
    {
        var_16 = ((/* implicit */_Bool) var_8);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_20 [i_5]))))), (arr_3 [i_5 - 2])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : ((+(((arr_18 [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)0] [i_5]))) : (var_4)))))));
        var_18 ^= var_3;
        var_19 = ((/* implicit */signed char) ((((arr_2 [i_5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_5])))));
        arr_24 [4LL] |= ((/* implicit */unsigned char) arr_21 [(unsigned char)6]);
    }
    var_20 += ((/* implicit */unsigned short) ((signed char) (-(max((((/* implicit */long long int) 1014478514U)), (var_0))))));
}
