/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81510
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) (~((+(7)))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((6829900134757070430LL) | (((/* implicit */long long int) ((/* implicit */int) ((short) var_6))))))), (min((((/* implicit */unsigned long long int) (short)384)), (16853456761684880051ULL)))));
                            var_16 = ((/* implicit */unsigned short) max((var_16), ((unsigned short)6564)));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                            {
                                arr_14 [i_3] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)-385)) % (-1614964713))), (((/* implicit */int) ((unsigned char) 4301719382792346624LL)))));
                                var_17 ^= (+((~(1614964713))));
                            }
                            for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */_Bool) 4294967273U);
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-9737)) == ((~(((/* implicit */int) (unsigned short)12183)))))) ? (((/* implicit */long long int) (-(-1614964732)))) : (min((((((/* implicit */_Bool) 376828328)) ? (-6829900134757070430LL) : (((/* implicit */long long int) 1381415660)))), (((/* implicit */long long int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-109))))))))));
                                arr_18 [i_1] = ((/* implicit */unsigned short) 278446840);
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(min((((/* implicit */long long int) 1614964713)), (-4604892677636504572LL))))))));
            }
        } 
    } 
    var_20 = ((signed char) var_6);
    /* LoopSeq 3 */
    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        arr_22 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-23394)) / (((/* implicit */int) (unsigned short)18523))))), ((+(4654469897153041930ULL)))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) * (var_7)))) ? (((/* implicit */int) (short)23393)) : (((/* implicit */int) (unsigned char)236)))));
    }
    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -99543285))));
        arr_27 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned char)77)), (-1749234777)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-27454)) / (((/* implicit */int) (_Bool)1)))) / (((int) (short)-9737))))) : (max((((long long int) (signed char)-29)), (23LL)))));
        arr_28 [i_7] = ((/* implicit */signed char) ((int) max((8027702902626218159LL), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
    {
        arr_32 [i_8] [i_8] = ((/* implicit */signed char) var_12);
        arr_33 [6] [6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max(((short)-27720), ((short)9736)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)-1), ((short)15936)))))))));
        var_22 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 3676579791U)) ? (((/* implicit */int) (short)-11202)) : (((/* implicit */int) (short)-15936))))), (((-617572590481337513LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))));
        arr_34 [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_0)), (((13161009290648656585ULL) >> (((((/* implicit */int) (signed char)-29)) + (75)))))));
    }
}
