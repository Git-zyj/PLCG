/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71138
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        var_19 *= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)96))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-15911)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9050))) : (3886051575U)));
            var_22 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)45)))) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3568131097812219916ULL)))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned short)62885)) <= (((/* implicit */int) (short)-1)))));
            var_24 = ((/* implicit */unsigned short) ((signed char) arr_7 [i_1] [i_3]));
            arr_11 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 319563781U)) * (3568131097812219916ULL)));
        }
        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(638718660028245447ULL))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) 2147483647))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
                {
                    {
                        arr_20 [i_4] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)114)) | (((/* implicit */int) (signed char)46))));
                        var_27 = ((/* implicit */signed char) (unsigned char)68);
                        var_28 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_4)))));
                    }
                } 
            } 
        } 
        var_29 = min((((/* implicit */unsigned int) (unsigned short)383)), (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [(unsigned short)6] [i_4])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62885))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-31926), (((/* implicit */short) (unsigned char)156)))))))));
    }
    var_30 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (max((var_10), (((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((signed char) (unsigned char)229)))))));
    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1243282734U)) ? (3975403515U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (var_2))))) : (min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (unsigned short)60929)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2650))) : (319563781U)))))));
}
