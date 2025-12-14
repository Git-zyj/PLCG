/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68380
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 20; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */int) ((min((((arr_5 [i_0] [i_0]) >> (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) - (20649))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_6))))))) != (((((/* implicit */_Bool) (signed char)118)) ? (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])), (arr_10 [i_0] [i_0] [i_0] [i_3] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)127)))))))));
                        var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) (signed char)-119)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)112)))))) + (2147483647))) >> (((((unsigned int) ((unsigned char) (unsigned char)255))) - (238U)))));
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6115444233673954914ULL)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)141), ((unsigned char)143))))) : (((unsigned long long int) (short)12662)))), (((/* implicit */unsigned long long int) (short)835))));
                        var_22 = ((/* implicit */unsigned short) max(((unsigned char)159), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)10))))));
                    }
                    arr_13 [i_2] [(unsigned char)6] [i_0] &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)22922)) >> (((min((var_1), (((/* implicit */long long int) (signed char)(-127 - 1))))) + (7453890727493312699LL))))), (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)5)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((((/* implicit */_Bool) max((var_3), ((+(var_3)))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) (unsigned short)65535)))) ? (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4])))) : (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) (unsigned short)1))))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) == (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)182))))) ^ (max((((/* implicit */unsigned long long int) arr_0 [i_4])), (arr_2 [i_4]))))))))));
        var_25 = ((/* implicit */int) max((min((min((var_13), (((/* implicit */unsigned long long int) (unsigned char)150)))), (((/* implicit */unsigned long long int) max((2184868068U), (((/* implicit */unsigned int) (unsigned char)115))))))), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1]))));
        arr_17 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [10ULL] [i_4] [i_4]))) <= (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 2644935343U)) : (var_13))))))) % (max((max((36028797018963967ULL), (arr_5 [14ULL] [14ULL]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_4])))))))));
    }
    var_26 = ((/* implicit */short) max(((+(((/* implicit */int) var_11)))), (var_0)));
    var_27 = ((/* implicit */long long int) (unsigned short)128);
}
