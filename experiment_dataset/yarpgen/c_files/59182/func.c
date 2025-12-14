/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59182
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)-50))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-50)) ? (arr_1 [i_0]) : (((/* implicit */int) (short)12828)))))));
        var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 402653184U)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */int) (unsigned short)49566);
        var_17 = (unsigned short)18415;
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 944766240)) || (((/* implicit */_Bool) ((signed char) (unsigned short)49566))))) ? (((((/* implicit */_Bool) (~(5)))) ? (((/* implicit */int) (unsigned short)49566)) : (((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_2 [i_1] [i_1])))))) : (((/* implicit */int) arr_2 [i_1] [i_1]))));
        var_19 &= arr_3 [i_1];
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1] [(signed char)6] [(_Bool)1])) < (((/* implicit */int) (unsigned short)32768)))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (var_3) : (((/* implicit */int) (unsigned char)32)))) : (min((arr_6 [i_1]), (((/* implicit */int) (short)12805)))))) / (((/* implicit */int) (short)12805))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)75)) / (((/* implicit */int) (signed char)96)))) << (((((/* implicit */int) arr_12 [i_5] [i_3] [i_3] [i_4 - 1])) + (94)))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4 - 1] [i_4 - 1])) % (((/* implicit */int) arr_2 [i_4 - 1] [i_1]))));
                        }
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            var_23 -= ((/* implicit */unsigned int) -944766241);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)12828)), (-944766241)))) ? (((unsigned int) arr_2 [i_6 + 3] [i_4 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6 + 2] [i_4 + 1]))))))));
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((12962293826415063481ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)138)) % (((/* implicit */int) (unsigned short)6)))) != (((/* implicit */int) min((arr_8 [i_3] [i_4 - 1] [i_7 + 2] [i_4 + 1]), (arr_8 [(signed char)9] [(unsigned char)1] [i_7 + 2] [i_4 - 1])))))))));
                            var_27 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) % (((((/* implicit */_Bool) arr_16 [i_1] [i_3] [i_2] [i_3] [i_3] [i_4] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1]))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) var_5)) : (var_3))))))));
                            arr_19 [i_1] [i_2] [i_3] [i_4 - 1] [i_3] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-12829)), ((unsigned short)56637)))) > (((((/* implicit */int) (unsigned short)31888)) & (((/* implicit */int) (unsigned short)31888))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (119618226U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33648)))))) ? (1035201592U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))));
                            var_28 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_9)) * (((((/* implicit */int) (short)-4216)) | (((/* implicit */int) var_6)))))) + (2147483647))) << (((((((((/* implicit */int) var_6)) & (arr_6 [i_4 + 1]))) + (445273973))) - (25)))));
                        }
                        for (int i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */int) var_11)))) * (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_17 [i_1] [i_2] [i_3] [18LL] [(unsigned char)16] [i_1] [i_8]))));
                            var_31 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (min((0LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) -442170856))));
                        }
                        var_32 = ((unsigned long long int) ((_Bool) (unsigned short)4791));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)33648))))) ? (min((2065916600U), (2588710958U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))))));
                    }
                } 
            } 
        } 
    }
    var_34 += ((/* implicit */int) var_13);
}
