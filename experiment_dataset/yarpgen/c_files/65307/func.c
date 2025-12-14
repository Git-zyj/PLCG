/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65307
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) ? (((var_9) / (var_1))) : (min((var_8), (((/* implicit */int) var_7))))))) ? ((~(((var_10) ? (var_1) : (((/* implicit */int) var_4)))))) : ((-(var_8)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((unsigned long long int) 13340855394411264562ULL))))) ? (var_8) : (((/* implicit */int) var_2))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned long long int) min((((((/* implicit */unsigned long long int) var_9)) | (3430364193658824905ULL))), (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1])) << (((min((((/* implicit */int) arr_4 [i_1])), (arr_3 [i_1]))) - (217))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_4 [i_1])))), (((((/* implicit */int) (unsigned char)249)) | (((/* implicit */int) var_10)))))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 4; i_3 < 18; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_13 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((arr_5 [i_3 - 1] [i_3 - 3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-117))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 3])) || (((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 3]))))))));
                    arr_14 [i_4] [i_3] [i_4] = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)-4455)) ? (3430364193658824905ULL) : (15016379880050726685ULL)))));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_0)) ? (arr_11 [i_2] [i_2] [(unsigned short)7] [(unsigned short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)3940))))))), (arr_5 [i_2] [i_2])));
        arr_16 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)52))))) ? (((arr_1 [i_2] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (short)14336))))), (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_12 [i_2] [i_2]))))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            for (unsigned int i_6 = 1; i_6 < 16; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    {
                        var_15 &= ((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)50)), (((int) (short)-32441)))), (((arr_17 [i_6 - 1]) ? (((/* implicit */int) arr_17 [i_6 + 2])) : (((/* implicit */int) (short)-1))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */unsigned int) ((arr_23 [10ULL] [i_5] [i_5] [i_6 + 3]) << (((arr_24 [i_2] [i_5] [i_6]) - (3624561949U)))))) : (((((/* implicit */_Bool) arr_24 [i_7] [i_5] [i_6 + 3])) ? (((/* implicit */unsigned int) arr_23 [i_2] [i_2] [i_2] [i_6 + 3])) : (arr_24 [i_2] [i_5] [i_6])))));
                    }
                } 
            } 
        } 
        arr_25 [i_2] = ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_17 *= ((/* implicit */int) min((((/* implicit */short) ((((_Bool) var_1)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_8])) / (((/* implicit */int) var_3)))))))), (min((max((((/* implicit */short) var_3)), (arr_27 [i_8]))), (max((((/* implicit */short) (signed char)96)), ((short)3483)))))));
        arr_29 [i_8] [i_8] = ((/* implicit */int) (_Bool)0);
        arr_30 [i_8] [i_8] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
    }
    var_18 ^= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_9)), (15016379880050726710ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))) : (var_0))))));
}
