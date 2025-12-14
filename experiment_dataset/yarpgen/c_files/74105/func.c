/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74105
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
    var_10 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((((/* implicit */_Bool) 14622294815393540257ULL)) && (((/* implicit */_Bool) arr_7 [i_2])))))))));
                    arr_9 [i_0] [(unsigned short)3] = (~(((((/* implicit */_Bool) (signed char)-40)) ? (-15248649) : (-15248666))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned long long int) 15248647)), (18446744073709551615ULL))))) % (((/* implicit */unsigned long long int) ((((long long int) -2103970255)) | (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (7521011028490848970LL) : (((/* implicit */long long int) 2103970274)))))))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_1)) | (-2103970276))))) ? ((((!(((/* implicit */_Bool) 15248624)))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) ((((/* implicit */int) (short)24731)) <= (((/* implicit */int) (unsigned short)26288))))))) : (((int) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-32766))))))));
}
