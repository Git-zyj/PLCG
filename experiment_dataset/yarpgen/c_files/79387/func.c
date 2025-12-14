/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79387
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_8 [i_3] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (var_1))) / (((unsigned long long int) var_5)));
                        var_16 = ((/* implicit */unsigned int) max((var_16), ((+(((((_Bool) 630796394U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)105)))) : (var_9)))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) var_10)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_1))))))) : (((/* implicit */int) ((unsigned short) var_5)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        {
                            arr_17 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */long long int) (signed char)101);
                            var_18 = ((/* implicit */unsigned short) min((((unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6))))), (((/* implicit */unsigned int) var_13))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) ((short) var_12))))));
            var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)17640), (((/* implicit */unsigned short) var_13)))))) ^ ((-(((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82))))))));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)99))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)120))))) : (min((((/* implicit */unsigned long long int) var_12)), (1573042146263051681ULL))))))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)16865)) | (((/* implicit */int) (unsigned char)14))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1880420243U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (8708894509689813202LL)))), ((+(var_15))))))))));
                        var_23 = ((/* implicit */short) var_0);
                        var_24 = ((/* implicit */int) ((min((max((((/* implicit */unsigned int) var_0)), (4294967295U))), (((302495916U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))))))) >> (((((unsigned int) min((((/* implicit */long long int) -1)), (var_11)))) - (1256229067U)))));
                        arr_24 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_6)))));
                    }
                } 
            } 
            var_25 ^= ((/* implicit */unsigned long long int) ((var_15) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
            var_26 += ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((unsigned char) var_4))) + (((/* implicit */int) (unsigned char)177)))), (((/* implicit */int) (!(((/* implicit */_Bool) 630796393U)))))));
        }
    }
    var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((long long int) var_7))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 632976394207351265ULL))) || (((/* implicit */_Bool) ((unsigned long long int) var_1))))))));
}
